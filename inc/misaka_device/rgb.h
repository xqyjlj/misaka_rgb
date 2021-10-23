/**
 * @file rgb.h
 * @brief
 * @author xqyjlj (xqyjlj@126.com)
 * @version 0.0
 * @date 2021-08-01
 * @copyright Copyright © 2020-2021 xqyjlj<xqyjlj@126.com>
 * @SPDX-License-Identifier: Apache-2.0
 *
 * *********************************************************************************
 * @par ChangeLog:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2021-08-01 <td>0.0     <td>xqyjlj  <td>内容
 * </table>
 * *********************************************************************************
 */

#ifndef __MISAKA_RGB_BLING__H__
#define __MISAKA_RGB_BLING__H__

#include "stdint.h"

typedef enum
{
    misaka_rgb_color_none = 0,              /**< 灭 */
    misaka_rgb_color_red,                   /**< 红 */
    misaka_rgb_color_green,                 /**< 绿 */
    misaka_rgb_color_blue,                  /**< 蓝 */
    misaka_rgb_color_yellow,                /**< 黄 */
    misaka_rgb_color_cyan,                  /**< 青 */
    misaka_rgb_color_white,                 /**< 白 */
    misaka_rgb_color_purple,                /**< 紫 */
} misaka_rgb_color_enum;

typedef struct
{
    misaka_rgb_color_enum color1;           /**< 颜色1 */
    misaka_rgb_color_enum color2;			/**< 颜色2 */
    uint32_t continue_time;					/**< 闪烁持续时间 */
    uint32_t color1_cnt;					/**< 颜色1计数器 */
    uint16_t period_cnt;					/**< 颜色2计数器 */
    uint16_t cnt;							/**< 闪烁计数器 */
    uint8_t endless_flag;					/**< 无尽模式 */
    uint16_t time_base;						/**< 时间基数 */
} misaka_rgb_struct;

/**
 * @brief 设置RGB引脚
 * @param color 颜色
 */
void misaka_rgb_set_pin(misaka_rgb_color_enum color);

/**
 * @brief rgb初始化
 * @param base 时基
 */
void misaka_rgb_init(uint16_t time_base);

/**
 * @brief rgb模式设置
 * @param color1 颜色1
 * @param color2 颜色2
 * @param color1_time 颜色1时间
 * @param color2_time 颜色2时间
 * @param cnt 次数
 * @param endless_flag 无尽模式
 */
void misaka_rgb_mode_set(misaka_rgb_color_enum color1,
                         misaka_rgb_color_enum color2,
                         uint32_t color1_time,
                         uint32_t color2_time,
                         uint16_t cnt,
                         uint8_t endless_flag);

/**
 * @brief 周期处理函数
 */
void misaka_rgb_process();

#endif
