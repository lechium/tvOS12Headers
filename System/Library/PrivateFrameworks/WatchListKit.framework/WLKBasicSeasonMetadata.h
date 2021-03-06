/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSNumber, WLKShowContentRating, NSString;

@interface WLKBasicSeasonMetadata : WLKBasicContentMetadata {

	NSNumber* _seasonNumber;
	WLKShowContentRating* _contentRating;
	NSString* _canonicalShowID;

}

@property (nonatomic,readonly) NSNumber * seasonNumber;                           //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,readonly) WLKShowContentRating * contentRating;              //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalShowID;                   //@synthesize canonicalShowID=_canonicalShowID - In the implementation block
+(id)seasonsWithDictionaries:(id)arg1 ;
-(WLKShowContentRating *)contentRating;
-(NSNumber *)seasonNumber;
-(NSString *)canonicalShowID;
-(id)initWithDictionary:(id)arg1 ;
@end

