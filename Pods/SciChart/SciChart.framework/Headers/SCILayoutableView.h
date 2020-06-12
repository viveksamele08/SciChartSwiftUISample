//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILayoutableView.h is part of SCICHART®, High Performance Scientific Charts
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

#import "UIView+ISCIHitTestable.h"

/**
 * Defines the layout which performs layout on children which conforms to `ISCILayoutable` protocol.
 */
@interface SCILayoutableView : UIView

/**
 * Layout child in specified bounds.
 * @param child The child to perform layout on.
 * @param bounds Bounds used to layout child.
 */
- (void)layoutChildView:(UIView *)child withBounds:(CGRect)bounds;

@end
