/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSData, NSDictionary;

@interface PHAssetPhotosOneUpProperties : PHAssetPropertySet {

	BOOL _reverseLocationDataIsValid;
	NSData* _reverseLocationData;
	unsigned long long _variationSuggestionStates;

}

@property (nonatomic,readonly) BOOL reverseLocationDataIsValid;                           //@synthesize reverseLocationDataIsValid=_reverseLocationDataIsValid - In the implementation block
@property (nonatomic,readonly) NSData * reverseLocationData;                              //@synthesize reverseLocationData=_reverseLocationData - In the implementation block
@property (nonatomic,readonly) NSDictionary * locationAddressDictionary; 
@property (nonatomic,readonly) unsigned long long variationSuggestionStates;              //@synthesize variationSuggestionStates=_variationSuggestionStates - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSData *)reverseLocationData;
-(BOOL)reverseLocationDataIsValid;
-(unsigned long long)variationSuggestionStates;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(NSDictionary *)locationAddressDictionary;
-(id)localizedGeoDescriptionIsHome:(BOOL*)arg1 ;
@end

