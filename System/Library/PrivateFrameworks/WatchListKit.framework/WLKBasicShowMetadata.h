/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class WLKShowContentRating, NSDate, NSArray, NSString;

@interface WLKBasicShowMetadata : WLKBasicContentMetadata {

	WLKShowContentRating* _contentRating;
	NSDate* _releaseDate;
	NSDate* _finaleDate;
	NSArray* _genres;
	NSString* _network;

}

@property (nonatomic,readonly) WLKShowContentRating * contentRating;              //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,readonly) NSDate * releaseDate;                              //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) NSDate * finaleDate;                               //@synthesize finaleDate=_finaleDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * genres;                             //@synthesize genres=_genres - In the implementation block
@property (nonatomic,copy,readonly) NSString * network;                           //@synthesize network=_network - In the implementation block
-(WLKShowContentRating *)contentRating;
-(NSArray *)genres;
-(NSDate *)releaseDate;
-(NSString *)network;
-(NSDate *)finaleDate;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
@end

