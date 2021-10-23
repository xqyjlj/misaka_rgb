/**
 * @file Misaka_rgb_bling_port_rtt.c
 * @brief
 * @author xqyjlj (xqyjlj@126.com)
 * @version 0.0
 * @date 2021-09-07
 * @copyright Copyright © 2020-2021 xqyjlj<xqyjlj@126.com>
 * @SPDX-License-Identifier: Apache-2.0
 *
 * *********************************************************************************
 * @par ChangeLog:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2021-09-07 <td>0.0     <td>xqyjlj  <td>内容
 * </table>
 * *********************************************************************************
 */

/**
 * @brief 设置rgb的GPIO引脚
 * @param color 颜色
 */
#include "misaka_device/rgb.h"

/**
 * @brief 设置RBG颜色引脚
 * @param color 颜色
 */
void misaka_rgb_set_pin(misaka_rgb_color_enum color)
{
    /**
     * @brief 此处为STM32 LL库的示例
     */
    switch (color)
    {
    case misaka_rgb_color_none:
    {
        LL_GPIO_ResetOutputPin(RGB_R_GPIO_Port, RGB_R_Pin);
        LL_GPIO_ResetOutputPin(RGB_G_GPIO_Port, RGB_G_Pin);
        LL_GPIO_ResetOutputPin(RGB_B_GPIO_Port, RGB_B_Pin);
    }
    break;
    case misaka_rgb_color_red:
    {
        LL_GPIO_SetOutputPin(RGB_R_GPIO_Port, RGB_R_Pin);
        LL_GPIO_ResetOutputPin(RGB_G_GPIO_Port, RGB_G_Pin);
        LL_GPIO_ResetOutputPin(RGB_B_GPIO_Port, RGB_B_Pin);
    }
    break;
    case misaka_rgb_color_green:
    {
        LL_GPIO_ResetOutputPin(RGB_R_GPIO_Port, RGB_R_Pin);
        LL_GPIO_SetOutputPin(RGB_G_GPIO_Port, RGB_G_Pin);
        LL_GPIO_ResetOutputPin(RGB_B_GPIO_Port, RGB_B_Pin);
    }
    break;
    case misaka_rgb_color_blue:
    {
        LL_GPIO_ResetOutputPin(RGB_R_GPIO_Port, RGB_R_Pin);
        LL_GPIO_ResetOutputPin(RGB_G_GPIO_Port, RGB_G_Pin);
        LL_GPIO_SetOutputPin(RGB_B_GPIO_Port, RGB_B_Pin);
    }
    break;
    case misaka_rgb_color_yellow:
    {
        LL_GPIO_SetOutputPin(RGB_R_GPIO_Port, RGB_R_Pin);
        LL_GPIO_SetOutputPin(RGB_G_GPIO_Port, RGB_G_Pin);
        LL_GPIO_ResetOutputPin(RGB_B_GPIO_Port, RGB_B_Pin);
    }
    break;
    case misaka_rgb_color_cyan:
    {
        LL_GPIO_ResetOutputPin(RGB_R_GPIO_Port, RGB_R_Pin);
        LL_GPIO_SetOutputPin(RGB_G_GPIO_Port, RGB_G_Pin);
        LL_GPIO_SetOutputPin(RGB_B_GPIO_Port, RGB_B_Pin);
    }
    break;
    case misaka_rgb_color_white:
    {
        LL_GPIO_SetOutputPin(RGB_R_GPIO_Port, RGB_R_Pin);
        LL_GPIO_SetOutputPin(RGB_G_GPIO_Port, RGB_G_Pin);
        LL_GPIO_SetOutputPin(RGB_B_GPIO_Port, RGB_B_Pin);
    }
    break;
    case misaka_rgb_color_purple:
    {
        LL_GPIO_SetOutputPin(RGB_R_GPIO_Port, RGB_R_Pin);
        LL_GPIO_ResetOutputPin(RGB_G_GPIO_Port, RGB_G_Pin);
        LL_GPIO_SetOutputPin(RGB_B_GPIO_Port, RGB_B_Pin);
    }
    break;
    default:
    {
        LL_GPIO_ResetOutputPin(RGB_R_GPIO_Port, RGB_R_Pin);
        LL_GPIO_ResetOutputPin(RGB_G_GPIO_Port, RGB_G_Pin);
        LL_GPIO_ResetOutputPin(RGB_B_GPIO_Port, RGB_B_Pin);
    }
    break;
    }
}