/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, _DKHistogramMO;

@interface _DKHistogramValueMO : NSManagedObject

@property (nonatomic,copy) NSNumber * integerValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSNumber * count; 
@property (nonatomic,retain) _DKHistogramMO * histogram; 
+(id)fetchRequest;
@end
