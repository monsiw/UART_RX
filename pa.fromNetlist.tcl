
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name UART_RX -dir "C:/Xilinx/projects/.mine/UART_RX/planAhead_run_2" -part xc3s50atq144-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Xilinx/projects/.mine/UART_RX/UART_RX_To_7_Seg_Top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Xilinx/projects/.mine/UART_RX} }
set_property target_constrs_file "pins.ucf" [current_fileset -constrset]
add_files [list {pins.ucf}] -fileset [get_property constrset [current_run]]
link_design
