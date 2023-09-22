#include "NeuralNetwork.hpp"

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#include <esp_log.h>
#include <esp_random.h>

static const char* TAG = "ESP32 TensorFlowLite Intro";

static void delay()
{
    vTaskDelay(1000 / portTICK_PERIOD_MS);
}

static uint32_t random(uint32_t max)
{
    if (max == 0) {
        return 0;
    }
    return esp_random() % max;
}

void predict(NeuralNetwork& network)
{
    double number1 = random(1000) / static_cast<float>(1000);
    double number2 = random(1000) / static_cast<float>(1000);

    ESP_LOGI(TAG, "number1 = %.2f; number2 = %.2f", number1, number2);

    float result = network.predict(number1, number2);

    const char* expected = (number2 > number1)
        ? "True"
        : "False";
    const char* predicted = (result > 0.5)
        ? "True"
        : "False";

    ESP_LOGI(TAG, "%.2f %.2f - result %.2f - Expected %s, Predicted %s\n",
             number1, number2, result, expected, predicted);
}


extern "C" void app_main()
{
    NeuralNetwork nn;

    if (!nn.setUp()) {
        ESP_LOGE(TAG, "Failed to set-up neural network");
        return;
    }

    for (int i = 0; i < 100; ++i) {
        predict(nn);
        delay();
    }

    nn.tearDown();
}
