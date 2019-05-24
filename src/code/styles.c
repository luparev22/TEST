#include <gtk/gtk.h>

GtkCssProvider* set_styles()
{
    GtkCssProvider* css;
    css = gtk_css_provider_new();
    // clang-format off
    gtk_css_provider_load_from_data(
            css,
            "window {"
                "font-family: \"NanumSquareRound\";"
                "font-weight: bold;"
                "background-color: rgba(201, 221, 245, 1);"
            "}"
            ""
            "#btn_main {"
               " margin-right: 15px;"
                "margin-left: 15px;"
                "margin-bottom: 15px;"
            "}"
            ""
            
            "button {"
                "background-color:rgba(255, 255, 255, 0.8);"
                "border-radius: 8px;"
                "border-width: 3px;"
                "border-style: solid;"
                "border-color: rgb(160, 168, 255);"
                "color: rgb(160, 168, 255);"
            "}"
            ""
            "button:hover {"
                "color: #fff;"
                "background-color: #84B4FF;"
                "border-color: #007bff;"
                "box-shadow: 0 5px 15px rgba(0, 0, 0, 0.25), 0 4px 10px rgba(0, 123, 255, 0.25);"
                "border: 3px dotted #3a7999;"
                "}"
            ""
            "button:active {"
                "background-color: #84B7FF;"
                "border: 3px solid #3a7999;"
                "}"
            ""
            "button:disabled {"
                "background-color: rgba(127, 140, 141, 0.7);"
                "color: rgba(255,255,255,0.7);"
           "}"
            ""
            "#btn_main button {"
                "font-size:24px;"
            "}"
            ""
            "treeview {"
                "background-color: RGB(255,255,255);"
                "font-size:14px;"
                "color: #007bff;"
                "margin: 15px;"
                "border-width: 0px;"
                "border-right-width: 1px;"
                "border-left-width: 1px;"
                "border-bottom-width: 1px;"
                "border-style: solid;"
                "border-color: #007bff;"
            "}"
            ""
            "treeview header button {"
                "border-radius:1px;"
                "border-style: solid;"
                "color: #fff;"
                "background-color: #007bff;"
                "border-color: #007bff;"
                "box-shadow: 0 5px 15px rgba(0, 0, 0, 0.05), 0 4px 10px rgba(0, 123, 255, 0.25);"
            "}"
            ""
            "treeview header button:first-child {"
                "border-top-left-radius: 15px;"
            "}"
            ""
            "treeview header button:last-child {"
                "border-top-right-radius: 15px;"
            "}"
            ""
            "#btn_voc {"
               "margin: 15px;"
            "}"
            ""
            "label#header {"
                "font-size:40px;"
                "color: #007bff;"
            "}"
            "",
            -1,
            NULL);
    // clang-format on
    return css;
}