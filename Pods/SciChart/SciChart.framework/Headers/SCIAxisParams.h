//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisParams.h is part of SCICHART®, High Performance Scientific Charts
// For full terms and conditions of the license, see http://www.scichart.com/scichart-eula/
//
// This source code is protected by international copyright law. Unauthorized
// reproduction, reverse-engineering, or distribution of all or any portion of
// this source code is strictly prohibited.
//
// This source code contains confidential and proprietary trade secrets of
// SciChart Ltd., and should at no time be copied, transferred, sold,
// distributed or made available without express written permission.
//******************************************************************************

#import <Foundation/Foundation.h>

/**
 * Defines constants for the current axis setup for this render pass.
 */
struct SCIAxisParams {
    /**
     * Flag indicating whether the associated axis is `X-Axis`.
     */
    bool isXAxis;
    
    /**
     * Flag indicating whether the associated axis is horizontal axis.
     */
    bool isHorizontal;
    
    /**
     * Flag indicating whether the associated axis has flipped coordianates.
     */
    bool flipCoordinates;
    
    /**
     * The viewport dimension in pixels of associated axis.
     */
    int viewportDimension;
    
    /**
     * The required offset in pixels for associated axis.
     */
    int offset;
};

/**
 * Defines constants for the current axis setup for this render pass.
 */
typedef struct SCIAxisParams SCIAxisParams;
