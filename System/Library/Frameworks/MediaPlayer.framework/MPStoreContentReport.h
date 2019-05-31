/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPStoreContentReport : NSObject <NSCopying> {

	NSString* _userID;
	NSString* _contentID;
	long long _concernItemType;
	NSString* _commentText;
	NSString* _aucType;
	NSString* _concernTypeID;
	NSString* _displayText;

}

@property (nonatomic,copy) NSString * displayText;                   //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,copy) NSString * userID;                        //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * contentID;                     //@synthesize contentID=_contentID - In the implementation block
@property (assign,nonatomic) long long concernItemType;              //@synthesize concernItemType=_concernItemType - In the implementation block
@property (nonatomic,copy) NSString * commentText;                   //@synthesize commentText=_commentText - In the implementation block
@property (nonatomic,copy) NSString * aucType;                       //@synthesize aucType=_aucType - In the implementation block
@property (nonatomic,copy) NSString * concernTypeID;                 //@synthesize concernTypeID=_concernTypeID - In the implementation block
-(void)setCommentText:(NSString *)arg1 ;
-(NSString *)contentID;
-(long long)concernItemType;
-(NSString *)concernTypeID;
-(NSString *)aucType;
-(void)setConcernItemType:(long long)arg1 ;
-(void)setConcernTypeID:(NSString *)arg1 ;
-(void)setContentID:(NSString *)arg1 ;
-(void)setAucType:(NSString *)arg1 ;
-(NSString *)commentText;
-(NSString *)userID;
-(void)setUserID:(NSString *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
@end

