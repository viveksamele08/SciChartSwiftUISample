//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIUpdateSeriesTooltipAction.h is part of SCICHART®, High Performance Scientific Charts
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

@protocol ISCIView;

/**
 * Defines a callback which allows to update series tooltip with latest information for specified `[x, y]` coordinates on screen.
 * @param seriesTooltip The tooltip to update.
 * @param point The `[x, y]` coordinates on screen.
 */
typedef void (^SCIUpdateSeriesTooltipAction) (id<ISCIView> seriesTooltip, CGPoint point);