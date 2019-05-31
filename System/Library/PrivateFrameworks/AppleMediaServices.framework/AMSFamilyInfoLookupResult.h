/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface AMSFamilyInfoLookupResult : NSObject {

	BOOL _cached;
	NSArray* _familyMembers;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (getter=isCached,nonatomic,readonly) BOOL cached;                          //@synthesize cached=_cached - In the implementation block
@property (nonatomic,readonly) NSArray * familyMembers;                              //@synthesize familyMembers=_familyMembers - In the implementation block
+(id)_familyMembersFromDictionaryRepresentation:(id)arg1 ;
-(NSArray *)familyMembers;
-(BOOL)isCached;
-(id)initWithDictionaryRepresentation:(id)arg1 cached:(BOOL)arg2 ;
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
@end
