//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIChartListener.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCICollectionChangedEventArgs.h"

/**
 * Defines the protocol to property listener for chart.
 */
@protocol ISCIChartListener <NSObject>

/**
 * Called when property with specified id changes.
 * @param propertyId The id of property.
 */
- (void)onPropertyChanged:(int)propertyId;

/**
 * Caleed when collection associated with specified id changes.
 * @param eventId The id of property.
 * @param args The args with information about changes in collection.
 */
- (void)onCollectionChanged:(int)eventId args:(SCICollectionChangedEventArgs *)args;

@end
