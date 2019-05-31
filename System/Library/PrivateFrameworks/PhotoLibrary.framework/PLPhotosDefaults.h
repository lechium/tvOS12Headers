/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaItemCollection;

@interface PLPhotosDefaults : NSObject {

	BOOL _shouldPlayMusic;
	BOOL _summarizeMomentSections;
	int _transition;
	MPMediaItemCollection* _musicCollection;

}
+(int)randomTransition;
+(id)sharedInstance;
-(void)_reloadPhotoDefaultValuesAndNotify:(BOOL)arg1 ;
-(void)reloadPhotoDefaultValues;
-(BOOL)summarizeMomentSections;
-(int)transitionForAnimationMovingForward:(BOOL)arg1 ;
-(BOOL)shouldPlayMusic;
-(void)setShouldPlayMusic:(BOOL)arg1 ;
-(void)setMusicCollection:(id)arg1 ;
-(id)musicCollection;
-(id)init;
-(void)dealloc;
-(int)transition;
-(void)setTransition:(int)arg1 ;
@end
