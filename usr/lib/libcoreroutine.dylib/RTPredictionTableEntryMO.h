/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSSet, RTPredictionItemMO, RTPredictionTableMO;

@interface RTPredictionTableEntryMO : NSManagedObject

@property (nonatomic,retain) NSSet * conditions; 
@property (nonatomic,retain) RTPredictionItemMO * item; 
@property (nonatomic,retain) RTPredictionTableMO * predictionTable; 
+(id)managedObjectWithItem:(id)arg1 conditions:(id)arg2 inManagedObjectContext:(id)arg3 ;
@end

