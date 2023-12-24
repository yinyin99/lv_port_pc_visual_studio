#include "ExpertMode.h"

char ExpertMode::buf[64];

void* ExpertMode::solve(lv_obj_t * dropdown, lv_obj_t * label)
{
    lv_dropdown_get_selected_str(dropdown, buf, sizeof(buf));
    void* s = this->solve1(dropdown, label); // this expert tries to solve

    if (s != nullptr) // this expert found a solution
        return s;
    else { // this expert failed 
        if (_next != nullptr) // there is another expert that can try to solve
            return _next->solve(dropdown, label);
        else { // no more expert no solution found
            lv_label_set_text(label, "No Data");
            return nullptr;
        }
    }
}
