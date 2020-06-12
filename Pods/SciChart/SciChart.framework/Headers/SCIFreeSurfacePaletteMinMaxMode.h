//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIFreeSurfacePaletteMinMaxMode.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * Enumeration constants to define the mode of `SCIFreeSurfaceRenderableSeries3D.paletteMinimum` and `SCIFreeSurfaceRenderableSeries3D.paletteMaximum` values.
 */
typedef NS_ENUM(NSUInteger, SCIFreeSurfacePaletteMinMaxMode) {
    
    /**
     * Relative - `paletteMinimum` and `paletteMaximum` should be double values between 0.0 and 1.0.
     * @see `SCIFreeSurfaceRenderableSeries3D.paletteMinimum`.
     * @see `SCIFreeSurfaceRenderableSeries3D.paletteMaximum`.
     */
    SCIFreeSurfacePaletteMinMaxMode_Relative = 0,
    
    /**
     * Absolute - `paletteMinimum` and `paletteMaximum` should be absolute values.
     * @see `SCIFreeSurfaceRenderableSeries3D.paletteMinimum`.
     * @see `SCIFreeSurfaceRenderableSeries3D.paletteMaximum`.
     */
    SCIFreeSurfacePaletteMinMaxMode_Absolute = 1
};
