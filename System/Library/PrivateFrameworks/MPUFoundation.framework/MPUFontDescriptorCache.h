/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPUMutableFontDescriptor, NSMutableArray;

@interface MPUFontDescriptorCache : NSObject {

	MPUMutableFontDescriptor* _reusableMutableFontDescriptor;
	unsigned long long _maximumCapacity;
	NSMutableArray* _orderedCachedFontDescriptors;

}
+(id)sharedFontDescriptorCache;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)cachedImmutableFontDescriptorForConfigurationBlock:(/*^block*/id)arg1 ;
-(id)cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1 ;
-(id)_cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
