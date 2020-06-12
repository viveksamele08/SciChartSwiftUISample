//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDataSeriesObserver.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDataSeriesUpdate.h" 

@protocol ISCIDataSeriesCore;

/**
 * Defines the interface of `ISCIDataSeriesCore` change observer.
 * Called when data series changes.
 * @param dataSeries The data series instance which changed.
 * @param dataSeriesUpdate The change action.
 */
typedef void (^SCIDataSeriesObserver) (id<ISCIDataSeriesCore> _Nonnull dataSeries, NSUInteger dataSeriesUpdate);
