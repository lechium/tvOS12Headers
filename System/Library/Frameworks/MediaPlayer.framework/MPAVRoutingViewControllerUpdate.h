/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MPAVRoutingViewControllerUpdate : NSObject {

	BOOL _canGroup;
	BOOL _hasPendingPickedRoutes;
	BOOL _shouldReload;
	NSArray* _pickedRoutes;
	NSArray* _pendingPickedRoutes;
	NSArray* _displayableAvailableRoutes;
	NSArray* _displayAsPickedRoutes;
	NSArray* _volumeCapableRoutes;

}

@property (nonatomic,copy) NSArray * pickedRoutes;                            //@synthesize pickedRoutes=_pickedRoutes - In the implementation block
@property (nonatomic,copy) NSArray * pendingPickedRoutes;                     //@synthesize pendingPickedRoutes=_pendingPickedRoutes - In the implementation block
@property (nonatomic,copy) NSArray * displayableAvailableRoutes;              //@synthesize displayableAvailableRoutes=_displayableAvailableRoutes - In the implementation block
@property (nonatomic,copy) NSArray * displayAsPickedRoutes;                   //@synthesize displayAsPickedRoutes=_displayAsPickedRoutes - In the implementation block
@property (nonatomic,copy) NSArray * volumeCapableRoutes;                     //@synthesize volumeCapableRoutes=_volumeCapableRoutes - In the implementation block
@property (assign,nonatomic) BOOL canGroup;                                   //@synthesize canGroup=_canGroup - In the implementation block
@property (assign,nonatomic) BOOL hasPendingPickedRoutes;                     //@synthesize hasPendingPickedRoutes=_hasPendingPickedRoutes - In the implementation block
@property (assign,nonatomic) BOOL shouldReload;                               //@synthesize shouldReload=_shouldReload - In the implementation block
-(NSArray *)pickedRoutes;
-(NSArray *)pendingPickedRoutes;
-(BOOL)hasPendingPickedRoutes;
-(void)setPickedRoutes:(NSArray *)arg1 ;
-(void)setPendingPickedRoutes:(NSArray *)arg1 ;
-(void)setDisplayableAvailableRoutes:(NSArray *)arg1 ;
-(void)setDisplayAsPickedRoutes:(NSArray *)arg1 ;
-(void)setCanGroup:(BOOL)arg1 ;
-(void)setHasPendingPickedRoutes:(BOOL)arg1 ;
-(NSArray *)displayAsPickedRoutes;
-(void)setVolumeCapableRoutes:(NSArray *)arg1 ;
-(NSArray *)displayableAvailableRoutes;
-(NSArray *)volumeCapableRoutes;
-(BOOL)canGroup;
-(void)setShouldReload:(BOOL)arg1 ;
-(BOOL)shouldReload;
@end

