
/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */



#ifndef _RX_PPDU_END_USER_STATS_H_
#define _RX_PPDU_END_USER_STATS_H_
#if !defined(__ASSEMBLER__)
#endif

#include "rx_rxpcu_classification_overview.h"

#define NUM_OF_DWORDS_RX_PPDU_END_USER_STATS 23

struct rx_ppdu_end_user_stats {
    struct            rx_rxpcu_classification_overview                       rxpcu_classification_details;
             uint32_t sta_full_aid                    : 13,
                      mcs                             :  4,
                      nss                             :  3,
                      ofdma_info_valid                :  1,
                      dl_ofdma_ru_start_index         :  7,
                      reserved_1a                     :  4;
             uint32_t dl_ofdma_ru_width               :  7,
                      reserved_2a                     :  1,
                      user_receive_quality            :  8,
                      mpdu_cnt_fcs_err                : 10,
                      wbm2rxdma_buf_source_used       :  1,
                      fw2rxdma_buf_source_used        :  1,
                      sw2rxdma_buf_source_used        :  1,
                      reserved_2b                     :  3;
             uint32_t mpdu_cnt_fcs_ok                 :  9,
                      frame_control_info_valid        :  1,
                      qos_control_info_valid          :  1,
                      ht_control_info_valid           :  1,
                      data_sequence_control_info_valid:  1,
                      ht_control_info_null_valid      :  1,
                      reserved_3a                     :  2,
                      rxdma2reo_ring_used             :  1,
                      rxdma2fw_ring_used              :  1,
                      rxdma2sw_ring_used              :  1,
                      rxdma_release_ring_used         :  1,
                      ht_control_field_pkt_type       :  4,
                      reserved_3b                     :  8;
             uint32_t ast_index                       : 16,
                      frame_control_field             : 16;
             uint32_t first_data_seq_ctrl             : 16,
                      qos_control_field               : 16;
             uint32_t ht_control_field                : 32;
             uint32_t fcs_ok_bitmap_31_0              : 32;
             uint32_t fcs_ok_bitmap_63_32             : 32;
             uint32_t udp_msdu_count                  : 16,
                      tcp_msdu_count                  : 16;
             uint32_t other_msdu_count                : 16,
                      tcp_ack_msdu_count              : 16;
             uint32_t sw_response_reference_ptr       : 32;
             uint32_t received_qos_data_tid_bitmap    : 16,
                      received_qos_data_tid_eosp_bitmap: 16;
             uint32_t qosctrl_15_8_tid0               :  8,
                      qosctrl_15_8_tid1               :  8,
                      qosctrl_15_8_tid2               :  8,
                      qosctrl_15_8_tid3               :  8;
             uint32_t qosctrl_15_8_tid4               :  8,
                      qosctrl_15_8_tid5               :  8,
                      qosctrl_15_8_tid6               :  8,
                      qosctrl_15_8_tid7               :  8;
             uint32_t qosctrl_15_8_tid8               :  8,
                      qosctrl_15_8_tid9               :  8,
                      qosctrl_15_8_tid10              :  8,
                      qosctrl_15_8_tid11              :  8;
             uint32_t qosctrl_15_8_tid12              :  8,
                      qosctrl_15_8_tid13              :  8,
                      qosctrl_15_8_tid14              :  8,
                      qosctrl_15_8_tid15              :  8;
             uint32_t mpdu_ok_byte_count              : 25,
                      ampdu_delim_ok_count_6_0        :  7;
             uint32_t ampdu_delim_err_count           : 25,
                      ampdu_delim_ok_count_13_7       :  7;
             uint32_t mpdu_err_byte_count             : 25,
                      ampdu_delim_ok_count_20_14      :  7;
             uint32_t non_consecutive_delimiter_err   : 16,
                      reserved_20a                    : 16;
             uint32_t ht_control_null_field           : 32;
             uint32_t sw_response_reference_ptr_ext   : 32;
};

#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_OFFSET 0x00000000
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_LSB 0
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_MASK 0x00000001

#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_FCS_OK_OFFSET 0x00000000
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_FCS_OK_LSB 1
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_FILTER_PASS_MPDUS_FCS_OK_MASK 0x00000002

#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_OFFSET 0x00000000
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_LSB 2
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_MASK 0x00000004

#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_FCS_OK_OFFSET 0x00000000
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_FCS_OK_LSB 3
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_MONITOR_DIRECT_MPDUS_FCS_OK_MASK 0x00000008

#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_OFFSET 0x00000000
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_LSB 4
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_MASK 0x00000010

#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_FCS_OK_OFFSET 0x00000000
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_FCS_OK_LSB 5
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_MONITOR_OTHER_MPDUS_FCS_OK_MASK 0x00000020

#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_PHYRX_ABORT_RECEIVED_OFFSET 0x00000000
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_PHYRX_ABORT_RECEIVED_LSB 6
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_PHYRX_ABORT_RECEIVED_MASK 0x00000040

#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_RESERVED_0_OFFSET 0x00000000
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_RESERVED_0_LSB 7
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_RESERVED_0_MASK 0x0000ff80

#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_PHY_PPDU_ID_OFFSET 0x00000000
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_PHY_PPDU_ID_LSB 16
#define RX_PPDU_END_USER_STATS_0_RXPCU_CLASSIFICATION_DETAILS_PHY_PPDU_ID_MASK 0xffff0000

#define RX_PPDU_END_USER_STATS_1_STA_FULL_AID_OFFSET                 0x00000004
#define RX_PPDU_END_USER_STATS_1_STA_FULL_AID_LSB                    0
#define RX_PPDU_END_USER_STATS_1_STA_FULL_AID_MASK                   0x00001fff

#define RX_PPDU_END_USER_STATS_1_MCS_OFFSET                          0x00000004
#define RX_PPDU_END_USER_STATS_1_MCS_LSB                             13
#define RX_PPDU_END_USER_STATS_1_MCS_MASK                            0x0001e000

#define RX_PPDU_END_USER_STATS_1_NSS_OFFSET                          0x00000004
#define RX_PPDU_END_USER_STATS_1_NSS_LSB                             17
#define RX_PPDU_END_USER_STATS_1_NSS_MASK                            0x000e0000

#define RX_PPDU_END_USER_STATS_1_OFDMA_INFO_VALID_OFFSET             0x00000004
#define RX_PPDU_END_USER_STATS_1_OFDMA_INFO_VALID_LSB                20
#define RX_PPDU_END_USER_STATS_1_OFDMA_INFO_VALID_MASK               0x00100000

#define RX_PPDU_END_USER_STATS_1_DL_OFDMA_RU_START_INDEX_OFFSET      0x00000004
#define RX_PPDU_END_USER_STATS_1_DL_OFDMA_RU_START_INDEX_LSB         21
#define RX_PPDU_END_USER_STATS_1_DL_OFDMA_RU_START_INDEX_MASK        0x0fe00000

#define RX_PPDU_END_USER_STATS_1_RESERVED_1A_OFFSET                  0x00000004
#define RX_PPDU_END_USER_STATS_1_RESERVED_1A_LSB                     28
#define RX_PPDU_END_USER_STATS_1_RESERVED_1A_MASK                    0xf0000000

#define RX_PPDU_END_USER_STATS_2_DL_OFDMA_RU_WIDTH_OFFSET            0x00000008
#define RX_PPDU_END_USER_STATS_2_DL_OFDMA_RU_WIDTH_LSB               0
#define RX_PPDU_END_USER_STATS_2_DL_OFDMA_RU_WIDTH_MASK              0x0000007f

#define RX_PPDU_END_USER_STATS_2_RESERVED_2A_OFFSET                  0x00000008
#define RX_PPDU_END_USER_STATS_2_RESERVED_2A_LSB                     7
#define RX_PPDU_END_USER_STATS_2_RESERVED_2A_MASK                    0x00000080

#define RX_PPDU_END_USER_STATS_2_USER_RECEIVE_QUALITY_OFFSET         0x00000008
#define RX_PPDU_END_USER_STATS_2_USER_RECEIVE_QUALITY_LSB            8
#define RX_PPDU_END_USER_STATS_2_USER_RECEIVE_QUALITY_MASK           0x0000ff00

#define RX_PPDU_END_USER_STATS_2_MPDU_CNT_FCS_ERR_OFFSET             0x00000008
#define RX_PPDU_END_USER_STATS_2_MPDU_CNT_FCS_ERR_LSB                16
#define RX_PPDU_END_USER_STATS_2_MPDU_CNT_FCS_ERR_MASK               0x03ff0000

#define RX_PPDU_END_USER_STATS_2_WBM2RXDMA_BUF_SOURCE_USED_OFFSET    0x00000008
#define RX_PPDU_END_USER_STATS_2_WBM2RXDMA_BUF_SOURCE_USED_LSB       26
#define RX_PPDU_END_USER_STATS_2_WBM2RXDMA_BUF_SOURCE_USED_MASK      0x04000000

#define RX_PPDU_END_USER_STATS_2_FW2RXDMA_BUF_SOURCE_USED_OFFSET     0x00000008
#define RX_PPDU_END_USER_STATS_2_FW2RXDMA_BUF_SOURCE_USED_LSB        27
#define RX_PPDU_END_USER_STATS_2_FW2RXDMA_BUF_SOURCE_USED_MASK       0x08000000

#define RX_PPDU_END_USER_STATS_2_SW2RXDMA_BUF_SOURCE_USED_OFFSET     0x00000008
#define RX_PPDU_END_USER_STATS_2_SW2RXDMA_BUF_SOURCE_USED_LSB        28
#define RX_PPDU_END_USER_STATS_2_SW2RXDMA_BUF_SOURCE_USED_MASK       0x10000000

#define RX_PPDU_END_USER_STATS_2_RESERVED_2B_OFFSET                  0x00000008
#define RX_PPDU_END_USER_STATS_2_RESERVED_2B_LSB                     29
#define RX_PPDU_END_USER_STATS_2_RESERVED_2B_MASK                    0xe0000000

#define RX_PPDU_END_USER_STATS_3_MPDU_CNT_FCS_OK_OFFSET              0x0000000c
#define RX_PPDU_END_USER_STATS_3_MPDU_CNT_FCS_OK_LSB                 0
#define RX_PPDU_END_USER_STATS_3_MPDU_CNT_FCS_OK_MASK                0x000001ff

#define RX_PPDU_END_USER_STATS_3_FRAME_CONTROL_INFO_VALID_OFFSET     0x0000000c
#define RX_PPDU_END_USER_STATS_3_FRAME_CONTROL_INFO_VALID_LSB        9
#define RX_PPDU_END_USER_STATS_3_FRAME_CONTROL_INFO_VALID_MASK       0x00000200

#define RX_PPDU_END_USER_STATS_3_QOS_CONTROL_INFO_VALID_OFFSET       0x0000000c
#define RX_PPDU_END_USER_STATS_3_QOS_CONTROL_INFO_VALID_LSB          10
#define RX_PPDU_END_USER_STATS_3_QOS_CONTROL_INFO_VALID_MASK         0x00000400

#define RX_PPDU_END_USER_STATS_3_HT_CONTROL_INFO_VALID_OFFSET        0x0000000c
#define RX_PPDU_END_USER_STATS_3_HT_CONTROL_INFO_VALID_LSB           11
#define RX_PPDU_END_USER_STATS_3_HT_CONTROL_INFO_VALID_MASK          0x00000800

#define RX_PPDU_END_USER_STATS_3_DATA_SEQUENCE_CONTROL_INFO_VALID_OFFSET 0x0000000c
#define RX_PPDU_END_USER_STATS_3_DATA_SEQUENCE_CONTROL_INFO_VALID_LSB 12
#define RX_PPDU_END_USER_STATS_3_DATA_SEQUENCE_CONTROL_INFO_VALID_MASK 0x00001000

#define RX_PPDU_END_USER_STATS_3_HT_CONTROL_INFO_NULL_VALID_OFFSET   0x0000000c
#define RX_PPDU_END_USER_STATS_3_HT_CONTROL_INFO_NULL_VALID_LSB      13
#define RX_PPDU_END_USER_STATS_3_HT_CONTROL_INFO_NULL_VALID_MASK     0x00002000

#define RX_PPDU_END_USER_STATS_3_RESERVED_3A_OFFSET                  0x0000000c
#define RX_PPDU_END_USER_STATS_3_RESERVED_3A_LSB                     14
#define RX_PPDU_END_USER_STATS_3_RESERVED_3A_MASK                    0x0000c000

#define RX_PPDU_END_USER_STATS_3_RXDMA2REO_RING_USED_OFFSET          0x0000000c
#define RX_PPDU_END_USER_STATS_3_RXDMA2REO_RING_USED_LSB             16
#define RX_PPDU_END_USER_STATS_3_RXDMA2REO_RING_USED_MASK            0x00010000

#define RX_PPDU_END_USER_STATS_3_RXDMA2FW_RING_USED_OFFSET           0x0000000c
#define RX_PPDU_END_USER_STATS_3_RXDMA2FW_RING_USED_LSB              17
#define RX_PPDU_END_USER_STATS_3_RXDMA2FW_RING_USED_MASK             0x00020000

#define RX_PPDU_END_USER_STATS_3_RXDMA2SW_RING_USED_OFFSET           0x0000000c
#define RX_PPDU_END_USER_STATS_3_RXDMA2SW_RING_USED_LSB              18
#define RX_PPDU_END_USER_STATS_3_RXDMA2SW_RING_USED_MASK             0x00040000

#define RX_PPDU_END_USER_STATS_3_RXDMA_RELEASE_RING_USED_OFFSET      0x0000000c
#define RX_PPDU_END_USER_STATS_3_RXDMA_RELEASE_RING_USED_LSB         19
#define RX_PPDU_END_USER_STATS_3_RXDMA_RELEASE_RING_USED_MASK        0x00080000

#define RX_PPDU_END_USER_STATS_3_HT_CONTROL_FIELD_PKT_TYPE_OFFSET    0x0000000c
#define RX_PPDU_END_USER_STATS_3_HT_CONTROL_FIELD_PKT_TYPE_LSB       20
#define RX_PPDU_END_USER_STATS_3_HT_CONTROL_FIELD_PKT_TYPE_MASK      0x00f00000

#define RX_PPDU_END_USER_STATS_3_RESERVED_3B_OFFSET                  0x0000000c
#define RX_PPDU_END_USER_STATS_3_RESERVED_3B_LSB                     24
#define RX_PPDU_END_USER_STATS_3_RESERVED_3B_MASK                    0xff000000

#define RX_PPDU_END_USER_STATS_4_AST_INDEX_OFFSET                    0x00000010
#define RX_PPDU_END_USER_STATS_4_AST_INDEX_LSB                       0
#define RX_PPDU_END_USER_STATS_4_AST_INDEX_MASK                      0x0000ffff

#define RX_PPDU_END_USER_STATS_4_FRAME_CONTROL_FIELD_OFFSET          0x00000010
#define RX_PPDU_END_USER_STATS_4_FRAME_CONTROL_FIELD_LSB             16
#define RX_PPDU_END_USER_STATS_4_FRAME_CONTROL_FIELD_MASK            0xffff0000

#define RX_PPDU_END_USER_STATS_5_FIRST_DATA_SEQ_CTRL_OFFSET          0x00000014
#define RX_PPDU_END_USER_STATS_5_FIRST_DATA_SEQ_CTRL_LSB             0
#define RX_PPDU_END_USER_STATS_5_FIRST_DATA_SEQ_CTRL_MASK            0x0000ffff

#define RX_PPDU_END_USER_STATS_5_QOS_CONTROL_FIELD_OFFSET            0x00000014
#define RX_PPDU_END_USER_STATS_5_QOS_CONTROL_FIELD_LSB               16
#define RX_PPDU_END_USER_STATS_5_QOS_CONTROL_FIELD_MASK              0xffff0000

#define RX_PPDU_END_USER_STATS_6_HT_CONTROL_FIELD_OFFSET             0x00000018
#define RX_PPDU_END_USER_STATS_6_HT_CONTROL_FIELD_LSB                0
#define RX_PPDU_END_USER_STATS_6_HT_CONTROL_FIELD_MASK               0xffffffff

#define RX_PPDU_END_USER_STATS_7_FCS_OK_BITMAP_31_0_OFFSET           0x0000001c
#define RX_PPDU_END_USER_STATS_7_FCS_OK_BITMAP_31_0_LSB              0
#define RX_PPDU_END_USER_STATS_7_FCS_OK_BITMAP_31_0_MASK             0xffffffff

#define RX_PPDU_END_USER_STATS_8_FCS_OK_BITMAP_63_32_OFFSET          0x00000020
#define RX_PPDU_END_USER_STATS_8_FCS_OK_BITMAP_63_32_LSB             0
#define RX_PPDU_END_USER_STATS_8_FCS_OK_BITMAP_63_32_MASK            0xffffffff

#define RX_PPDU_END_USER_STATS_9_UDP_MSDU_COUNT_OFFSET               0x00000024
#define RX_PPDU_END_USER_STATS_9_UDP_MSDU_COUNT_LSB                  0
#define RX_PPDU_END_USER_STATS_9_UDP_MSDU_COUNT_MASK                 0x0000ffff

#define RX_PPDU_END_USER_STATS_9_TCP_MSDU_COUNT_OFFSET               0x00000024
#define RX_PPDU_END_USER_STATS_9_TCP_MSDU_COUNT_LSB                  16
#define RX_PPDU_END_USER_STATS_9_TCP_MSDU_COUNT_MASK                 0xffff0000

#define RX_PPDU_END_USER_STATS_10_OTHER_MSDU_COUNT_OFFSET            0x00000028
#define RX_PPDU_END_USER_STATS_10_OTHER_MSDU_COUNT_LSB               0
#define RX_PPDU_END_USER_STATS_10_OTHER_MSDU_COUNT_MASK              0x0000ffff

#define RX_PPDU_END_USER_STATS_10_TCP_ACK_MSDU_COUNT_OFFSET          0x00000028
#define RX_PPDU_END_USER_STATS_10_TCP_ACK_MSDU_COUNT_LSB             16
#define RX_PPDU_END_USER_STATS_10_TCP_ACK_MSDU_COUNT_MASK            0xffff0000

#define RX_PPDU_END_USER_STATS_11_SW_RESPONSE_REFERENCE_PTR_OFFSET   0x0000002c
#define RX_PPDU_END_USER_STATS_11_SW_RESPONSE_REFERENCE_PTR_LSB      0
#define RX_PPDU_END_USER_STATS_11_SW_RESPONSE_REFERENCE_PTR_MASK     0xffffffff

#define RX_PPDU_END_USER_STATS_12_RECEIVED_QOS_DATA_TID_BITMAP_OFFSET 0x00000030
#define RX_PPDU_END_USER_STATS_12_RECEIVED_QOS_DATA_TID_BITMAP_LSB   0
#define RX_PPDU_END_USER_STATS_12_RECEIVED_QOS_DATA_TID_BITMAP_MASK  0x0000ffff

#define RX_PPDU_END_USER_STATS_12_RECEIVED_QOS_DATA_TID_EOSP_BITMAP_OFFSET 0x00000030
#define RX_PPDU_END_USER_STATS_12_RECEIVED_QOS_DATA_TID_EOSP_BITMAP_LSB 16
#define RX_PPDU_END_USER_STATS_12_RECEIVED_QOS_DATA_TID_EOSP_BITMAP_MASK 0xffff0000

#define RX_PPDU_END_USER_STATS_13_QOSCTRL_15_8_TID0_OFFSET           0x00000034
#define RX_PPDU_END_USER_STATS_13_QOSCTRL_15_8_TID0_LSB              0
#define RX_PPDU_END_USER_STATS_13_QOSCTRL_15_8_TID0_MASK             0x000000ff

#define RX_PPDU_END_USER_STATS_13_QOSCTRL_15_8_TID1_OFFSET           0x00000034
#define RX_PPDU_END_USER_STATS_13_QOSCTRL_15_8_TID1_LSB              8
#define RX_PPDU_END_USER_STATS_13_QOSCTRL_15_8_TID1_MASK             0x0000ff00

#define RX_PPDU_END_USER_STATS_13_QOSCTRL_15_8_TID2_OFFSET           0x00000034
#define RX_PPDU_END_USER_STATS_13_QOSCTRL_15_8_TID2_LSB              16
#define RX_PPDU_END_USER_STATS_13_QOSCTRL_15_8_TID2_MASK             0x00ff0000

#define RX_PPDU_END_USER_STATS_13_QOSCTRL_15_8_TID3_OFFSET           0x00000034
#define RX_PPDU_END_USER_STATS_13_QOSCTRL_15_8_TID3_LSB              24
#define RX_PPDU_END_USER_STATS_13_QOSCTRL_15_8_TID3_MASK             0xff000000

#define RX_PPDU_END_USER_STATS_14_QOSCTRL_15_8_TID4_OFFSET           0x00000038
#define RX_PPDU_END_USER_STATS_14_QOSCTRL_15_8_TID4_LSB              0
#define RX_PPDU_END_USER_STATS_14_QOSCTRL_15_8_TID4_MASK             0x000000ff

#define RX_PPDU_END_USER_STATS_14_QOSCTRL_15_8_TID5_OFFSET           0x00000038
#define RX_PPDU_END_USER_STATS_14_QOSCTRL_15_8_TID5_LSB              8
#define RX_PPDU_END_USER_STATS_14_QOSCTRL_15_8_TID5_MASK             0x0000ff00

#define RX_PPDU_END_USER_STATS_14_QOSCTRL_15_8_TID6_OFFSET           0x00000038
#define RX_PPDU_END_USER_STATS_14_QOSCTRL_15_8_TID6_LSB              16
#define RX_PPDU_END_USER_STATS_14_QOSCTRL_15_8_TID6_MASK             0x00ff0000

#define RX_PPDU_END_USER_STATS_14_QOSCTRL_15_8_TID7_OFFSET           0x00000038
#define RX_PPDU_END_USER_STATS_14_QOSCTRL_15_8_TID7_LSB              24
#define RX_PPDU_END_USER_STATS_14_QOSCTRL_15_8_TID7_MASK             0xff000000

#define RX_PPDU_END_USER_STATS_15_QOSCTRL_15_8_TID8_OFFSET           0x0000003c
#define RX_PPDU_END_USER_STATS_15_QOSCTRL_15_8_TID8_LSB              0
#define RX_PPDU_END_USER_STATS_15_QOSCTRL_15_8_TID8_MASK             0x000000ff

#define RX_PPDU_END_USER_STATS_15_QOSCTRL_15_8_TID9_OFFSET           0x0000003c
#define RX_PPDU_END_USER_STATS_15_QOSCTRL_15_8_TID9_LSB              8
#define RX_PPDU_END_USER_STATS_15_QOSCTRL_15_8_TID9_MASK             0x0000ff00

#define RX_PPDU_END_USER_STATS_15_QOSCTRL_15_8_TID10_OFFSET          0x0000003c
#define RX_PPDU_END_USER_STATS_15_QOSCTRL_15_8_TID10_LSB             16
#define RX_PPDU_END_USER_STATS_15_QOSCTRL_15_8_TID10_MASK            0x00ff0000

#define RX_PPDU_END_USER_STATS_15_QOSCTRL_15_8_TID11_OFFSET          0x0000003c
#define RX_PPDU_END_USER_STATS_15_QOSCTRL_15_8_TID11_LSB             24
#define RX_PPDU_END_USER_STATS_15_QOSCTRL_15_8_TID11_MASK            0xff000000

#define RX_PPDU_END_USER_STATS_16_QOSCTRL_15_8_TID12_OFFSET          0x00000040
#define RX_PPDU_END_USER_STATS_16_QOSCTRL_15_8_TID12_LSB             0
#define RX_PPDU_END_USER_STATS_16_QOSCTRL_15_8_TID12_MASK            0x000000ff

#define RX_PPDU_END_USER_STATS_16_QOSCTRL_15_8_TID13_OFFSET          0x00000040
#define RX_PPDU_END_USER_STATS_16_QOSCTRL_15_8_TID13_LSB             8
#define RX_PPDU_END_USER_STATS_16_QOSCTRL_15_8_TID13_MASK            0x0000ff00

#define RX_PPDU_END_USER_STATS_16_QOSCTRL_15_8_TID14_OFFSET          0x00000040
#define RX_PPDU_END_USER_STATS_16_QOSCTRL_15_8_TID14_LSB             16
#define RX_PPDU_END_USER_STATS_16_QOSCTRL_15_8_TID14_MASK            0x00ff0000

#define RX_PPDU_END_USER_STATS_16_QOSCTRL_15_8_TID15_OFFSET          0x00000040
#define RX_PPDU_END_USER_STATS_16_QOSCTRL_15_8_TID15_LSB             24
#define RX_PPDU_END_USER_STATS_16_QOSCTRL_15_8_TID15_MASK            0xff000000

#define RX_PPDU_END_USER_STATS_17_MPDU_OK_BYTE_COUNT_OFFSET          0x00000044
#define RX_PPDU_END_USER_STATS_17_MPDU_OK_BYTE_COUNT_LSB             0
#define RX_PPDU_END_USER_STATS_17_MPDU_OK_BYTE_COUNT_MASK            0x01ffffff

#define RX_PPDU_END_USER_STATS_17_AMPDU_DELIM_OK_COUNT_6_0_OFFSET    0x00000044
#define RX_PPDU_END_USER_STATS_17_AMPDU_DELIM_OK_COUNT_6_0_LSB       25
#define RX_PPDU_END_USER_STATS_17_AMPDU_DELIM_OK_COUNT_6_0_MASK      0xfe000000

#define RX_PPDU_END_USER_STATS_18_AMPDU_DELIM_ERR_COUNT_OFFSET       0x00000048
#define RX_PPDU_END_USER_STATS_18_AMPDU_DELIM_ERR_COUNT_LSB          0
#define RX_PPDU_END_USER_STATS_18_AMPDU_DELIM_ERR_COUNT_MASK         0x01ffffff

#define RX_PPDU_END_USER_STATS_18_AMPDU_DELIM_OK_COUNT_13_7_OFFSET   0x00000048
#define RX_PPDU_END_USER_STATS_18_AMPDU_DELIM_OK_COUNT_13_7_LSB      25
#define RX_PPDU_END_USER_STATS_18_AMPDU_DELIM_OK_COUNT_13_7_MASK     0xfe000000

#define RX_PPDU_END_USER_STATS_19_MPDU_ERR_BYTE_COUNT_OFFSET         0x0000004c
#define RX_PPDU_END_USER_STATS_19_MPDU_ERR_BYTE_COUNT_LSB            0
#define RX_PPDU_END_USER_STATS_19_MPDU_ERR_BYTE_COUNT_MASK           0x01ffffff

#define RX_PPDU_END_USER_STATS_19_AMPDU_DELIM_OK_COUNT_20_14_OFFSET  0x0000004c
#define RX_PPDU_END_USER_STATS_19_AMPDU_DELIM_OK_COUNT_20_14_LSB     25
#define RX_PPDU_END_USER_STATS_19_AMPDU_DELIM_OK_COUNT_20_14_MASK    0xfe000000

#define RX_PPDU_END_USER_STATS_20_NON_CONSECUTIVE_DELIMITER_ERR_OFFSET 0x00000050
#define RX_PPDU_END_USER_STATS_20_NON_CONSECUTIVE_DELIMITER_ERR_LSB  0
#define RX_PPDU_END_USER_STATS_20_NON_CONSECUTIVE_DELIMITER_ERR_MASK 0x0000ffff

#define RX_PPDU_END_USER_STATS_20_RESERVED_20A_OFFSET                0x00000050
#define RX_PPDU_END_USER_STATS_20_RESERVED_20A_LSB                   16
#define RX_PPDU_END_USER_STATS_20_RESERVED_20A_MASK                  0xffff0000

#define RX_PPDU_END_USER_STATS_21_HT_CONTROL_NULL_FIELD_OFFSET       0x00000054
#define RX_PPDU_END_USER_STATS_21_HT_CONTROL_NULL_FIELD_LSB          0
#define RX_PPDU_END_USER_STATS_21_HT_CONTROL_NULL_FIELD_MASK         0xffffffff

#define RX_PPDU_END_USER_STATS_22_SW_RESPONSE_REFERENCE_PTR_EXT_OFFSET 0x00000058
#define RX_PPDU_END_USER_STATS_22_SW_RESPONSE_REFERENCE_PTR_EXT_LSB  0
#define RX_PPDU_END_USER_STATS_22_SW_RESPONSE_REFERENCE_PTR_EXT_MASK 0xffffffff

#endif
