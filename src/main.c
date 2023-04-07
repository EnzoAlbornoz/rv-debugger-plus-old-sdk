// #include "hal_usb.h"
// #include "usbd_core.h"

#include "bflb_platform.h"
#include "bl702_ef_ctrl.h"
#include "bl702_usb.h"
#include "bl702_glb.h"
#include "hal_gpio.h"

int main() {


    // GLB_Select_Internal_Flash();
    bflb_platform_init(0);
    gpio_set_mode(GPIO_PIN_9, GPIO_OUTPUT_MODE);
    gpio_set_mode(GPIO_PIN_17, GPIO_OUTPUT_MODE);
    gpio_write(GPIO_PIN_9, 0);
    gpio_write(GPIO_PIN_17, 0);

    while(1) {

        gpio_write(GPIO_PIN_9, 1);
        gpio_write(GPIO_PIN_17, 1);

        bflb_platform_delay_ms(100);

        
        gpio_write(GPIO_PIN_9, 0);
        gpio_write(GPIO_PIN_17, 0);

        bflb_platform_delay_ms(100);

    }
}