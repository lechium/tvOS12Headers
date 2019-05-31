/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCTVRemotePayload : MCPayload {

	NSArray* _allowedTVs;
	NSArray* _allowedRemotes;

}

@property (nonatomic,retain) NSArray * allowedTVs;                  //@synthesize allowedTVs=_allowedTVs - In the implementation block
@property (nonatomic,retain) NSArray * allowedRemotes;              //@synthesize allowedRemotes=_allowedRemotes - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setAllowedRemotes:(NSArray *)arg1 ;
-(void)setAllowedTVs:(NSArray *)arg1 ;
-(NSArray *)allowedRemotes;
-(NSArray *)allowedTVs;
-(id)restrictions;
-(id)description;
@end
