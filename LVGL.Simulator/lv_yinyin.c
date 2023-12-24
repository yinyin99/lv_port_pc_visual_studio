#include "lv_yinyin.h"
#include "ui.h"


#define CANVAS_WIDTH  240
#define CANVAS_HEIGHT  240


uint32_t getSpeed(void) {
    return speed;
}

uint32_t getRPM(void)
{
    return rpm;
}

void lv_yinyin_demo(void) {

    ui_init();

    //lv_obj_set_style_bg_color(lv_scr_act(), lv_palette_main(LV_PALETTE_BROWN), LV_PART_MAIN);

    ///*Create a buffer for the canvas*/
    //static lv_color_t cbuf[CANVAS_WIDTH * 120];

    ///*Create a canvas and initialize its palette*/
    //lv_obj_t* canvas = lv_canvas_create(lv_scr_act());
    //lv_canvas_set_buffer(canvas, cbuf, CANVAS_WIDTH, CANVAS_HEIGHT, LV_IMG_CF_TRUE_COLOR);
    //lv_canvas_fill_bg(canvas, lv_color_hex3(0xccc), LV_OPA_COVER);
    //lv_obj_center(canvas);

    //lv_draw_rect_dsc_t dsc;
    //lv_draw_rect_dsc_init(&dsc);
    //dsc.bg_color = lv_palette_main(LV_PALETTE_CYAN);
    //////dsc.border_color = lv_palette_main(LV_PALETTE_BLUE);
    //////dsc.border_width = 3;
    //////dsc.outline_color = lv_palette_main(LV_PALETTE_GREEN);
    //////dsc.outline_width = 2;
    //////dsc.outline_pad = 2;
    ////dsc.bg_opa = LV_OPA_50;
    //dsc.radius = LV_RADIUS_CIRCLE;
    //////dsc.border_width = 3;

    //int x = CANVAS_WIDTH * 0.15;
    //int y = CANVAS_HEIGHT * 0.20;
    //lv_canvas_draw_rect(canvas, x, y, CANVAS_WIDTH - 2*x, CANVAS_HEIGHT - 2*y, &dsc);

    ////lv_canvas_finish_layer(canvas, &layer);

   


    ///*Create a buffer for the canvas*/
    //LV_DRAW_BUF_DEFINE(draw_buf, CANVAS_WIDTH, CANVAS_HEIGHT, LV_COLOR_FORMAT_ARGB8888);

    ///*Create a canvas and initialize its palette*/
    //lv_obj_t* canvas = lv_canvas_create(lv_screen_active());
    //lv_canvas_set_draw_buf(canvas, &draw_buf);

    //lv_canvas_fill_bg(canvas, lv_color_hex3(0xccc), LV_OPA_COVER);
    //lv_obj_center(canvas);

    //lv_layer_t layer;
    //lv_canvas_init_layer(canvas, &layer);

    //lv_draw_rect_dsc_t dsc;
    //lv_draw_rect_dsc_init(&dsc);
    //dsc.bg_color = lv_palette_main(LV_PALETTE_NONE);
    ////dsc.border_color = lv_palette_main(LV_PALETTE_BLUE);
    ////dsc.border_width = 3;
    ////dsc.outline_color = lv_palette_main(LV_PALETTE_GREEN);
    ////dsc.outline_width = 2;
    ////dsc.outline_pad = 2;
    ////dsc.outline_opa = LV_OPA_50;
    //dsc.radius = LV_RADIUS_CIRCLE;
    ////dsc.border_width = 3;

    //lv_area_t coords = { 10, 10, CANVAS_WIDTH - 10, CANVAS_HEIGHT - 10 };

    //lv_draw_rect(&layer, &dsc, &coords);

    //lv_canvas_finish_layer(canvas, &layer);

}

void lv_yinyin_update(void) {
    if (lv_obj_is_valid(ui_Label1) && lv_obj_get_screen(ui_Label1) == lv_scr_act()) {
        ui_update();
        //speed += 1;
    }
}
