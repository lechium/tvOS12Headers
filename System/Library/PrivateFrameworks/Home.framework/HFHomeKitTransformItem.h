/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTransformItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/HFAccessoryVendor.h>

@class NSString;

@interface HFHomeKitTransformItem : HFTransformItem <HFHomeKitItemProtocol, HFAccessoryVendor>

@property (nonatomic,readonly) HFItem*<HFHomeKitItemProtocol> sourceHomeKitItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id<HFHomeKitObject>)homeKitObject;
-(HFItem*<HFHomeKitItemProtocol>)sourceHomeKitItem;
-(id)accessories;
@end

