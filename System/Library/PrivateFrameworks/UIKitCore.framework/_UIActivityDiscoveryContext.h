/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _UIActivityDiscoveryContext : NSObject <NSSecureCoding> {

	NSArray* _activityItemValueExtensionMatchingDictionaries;

}

@property (nonatomic,retain) NSArray * activityItemValueExtensionMatchingDictionaries;              //@synthesize activityItemValueExtensionMatchingDictionaries=_activityItemValueExtensionMatchingDictionaries - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextFromExtensionItem:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setActivityItemValueExtensionMatchingDictionaries:(NSArray *)arg1 ;
-(NSArray *)activityItemValueExtensionMatchingDictionaries;
-(id)newExtensionItem;
@end
