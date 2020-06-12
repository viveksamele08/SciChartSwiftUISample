//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBoxAnnotation.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAnnotationBase.h"

/**
 * Defines a rectangle or box annotation, which may be placed on the chart at specific `X1, Y1, X2, Y2` coordinates.
 */
@interface SCIBoxAnnotation : SCIAnnotationBase

/**
 * Pen with which outline of box annotation is drawn on chart surface.
 */
@property (strong, nonatomic) SCIPenStyle *borderPen;

/**
 * Brush with which box annotation is drawn on chart surface.
 */
@property (strong, nonatomic) SCIBrushStyle *fillBrush;

@end
