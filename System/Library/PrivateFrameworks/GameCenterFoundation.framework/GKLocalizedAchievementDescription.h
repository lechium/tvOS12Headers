/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKAchievementDescription.h>

@class GKGame, NSString;

@interface GKLocalizedAchievementDescription : GKAchievementDescription {

	GKGame* _game;
	NSString* _iconImageName;

}

@property (retain) GKGame * game;                       //@synthesize game=_game - In the implementation block
@property (copy) NSString * iconImageName;              //@synthesize iconImageName=_iconImageName - In the implementation block
-(id)_localizedStringFromKey:(id)arg1 ;
-(id)achievedDescription;
-(id)unachievedDescription;
-(NSString *)iconImageName;
-(id)imageNameForIcon;
-(void)setIconImageName:(NSString *)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(GKGame *)game;
-(void)dealloc;
-(id)title;
@end

