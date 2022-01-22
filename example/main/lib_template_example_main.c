#include "lib.h"
#include <esp_log.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

static const char TAG[] = "example";

_Noreturn void app_main()
{
    lib_example();

    // Setup complete
    ESP_LOGI(TAG, "started");

    while (true)
    {
        vTaskDelay(1);
    }
}
