/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSString;

@interface REBulletinDistributorRelevanceProvider : RERelevanceProvider {

	NSString* _bulletinSectionIdentifier;

}

@property (nonatomic,readonly) NSString * bulletinSectionIdentifier;              //@synthesize bulletinSectionIdentifier=_bulletinSectionIdentifier - In the implementation block
+(id)relevanceSimulatorID;
-(id)dictionaryEncoding;
-(id)initWithBulletinSectionIdentifier:(id)arg1 ;
-(NSString *)bulletinSectionIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)_hash;
@end

