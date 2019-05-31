/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/IKJSPlayer.h>
@class NSString, IKJSPlaylist, IKJSMediaItem, NSNumber, NSDate, IKDOMDocument, NSArray, NSDictionary;


@protocol IKJSPlayer <JSExport>
@property (nonatomic,readonly) NSString * playbackState; 
@property (nonatomic,retain) IKJSPlaylist * playlist; 
@property (nonatomic,readonly) IKJSMediaItem * currentMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * nextMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * previousMediaItem; 
@property (nonatomic,readonly) NSNumber * currentMediaItemDuration; 
@property (nonatomic,readonly) NSDate * currentMediaItemDate; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) BOOL muted; 
@property (nonatomic,retain) IKDOMDocument * overlayDocument; 
@property (nonatomic,retain) IKDOMDocument * interactiveOverlayDocument; 
@property (assign,nonatomic) BOOL interactiveOverlayDismissable; 
@property (nonatomic,readonly) NSArray * currentMediaItemAccessLogs; 
@property (nonatomic,readonly) NSArray * currentMediaItemErrorLogs; 
@property (nonatomic,copy) NSDictionary * contextMenuData; 
@property (assign,nonatomic) BOOL showsResumeMenu; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@required
-(void)previous;
-(BOOL)muted;
-(IKJSPlaylist *)playlist;
-(void)setPlaylist:(id)arg1;
-(void)play;
-(void)setPlaybackRate:(double)arg1;
-(void)seekToTime:(double)arg1;
-(IKJSMediaItem *)currentMediaItem;
-(double)playbackRate;
-(void)setMuted:(BOOL)arg1;
-(void)next;
-(NSString *)playbackState;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1;
-(NSDictionary *)contextMenuData;
-(void)setContextMenuData:(id)arg1;
-(IKJSMediaItem *)nextMediaItem;
-(IKJSMediaItem *)previousMediaItem;
-(BOOL)showsResumeMenu;
-(void)setShowsResumeMenu:(BOOL)arg1;
-(void)changeToMediaAtIndex:(unsigned long long)arg1;
-(NSNumber *)currentMediaItemDuration;
-(NSDate *)currentMediaItemDate;
-(IKDOMDocument *)overlayDocument;
-(void)setOverlayDocument:(id)arg1;
-(IKDOMDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(id)arg1;
-(BOOL)interactiveOverlayDismissable;
-(NSArray *)currentMediaItemAccessLogs;
-(NSArray *)currentMediaItemErrorLogs;
-(id)init;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(id)arg1;
-(void)stop;
-(void)present;
-(void)pause;

@end


@class NSString, IKJSPlaylist, IKJSMediaItem, NSNumber, NSDate, IKDOMDocument, NSArray, NSDictionary, NSMutableDictionary, IKAppPlayerBridge;

@interface IKJSPlayer : IKJSEventListenerObject <IKJSPlayer> {

	IKJSPlaylist* _playlist;
	long long _playerState;
	BOOL _holdingSelfReference;
	NSMutableDictionary* _timedMetadataListeners;
	NSMutableDictionary* _timeListeners;
	NSMutableDictionary* _boundaryListeners;
	IKAppPlayerBridge* _bridge;

}

@property (nonatomic,readonly) IKAppPlayerBridge * bridge;                            //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSString * playbackState; 
@property (nonatomic,retain) IKJSPlaylist * playlist; 
@property (nonatomic,readonly) IKJSMediaItem * currentMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * nextMediaItem; 
@property (nonatomic,readonly) IKJSMediaItem * previousMediaItem; 
@property (nonatomic,readonly) NSNumber * currentMediaItemDuration; 
@property (nonatomic,readonly) NSDate * currentMediaItemDate; 
@property (assign,nonatomic) double playbackRate; 
@property (assign,nonatomic) BOOL muted; 
@property (nonatomic,retain) IKDOMDocument * overlayDocument; 
@property (nonatomic,retain) IKDOMDocument * interactiveOverlayDocument; 
@property (assign,nonatomic) BOOL interactiveOverlayDismissable; 
@property (nonatomic,readonly) NSArray * currentMediaItemAccessLogs; 
@property (nonatomic,readonly) NSArray * currentMediaItemErrorLogs; 
@property (nonatomic,copy) NSDictionary * contextMenuData; 
@property (assign,nonatomic) BOOL showsResumeMenu; 
@property (nonatomic,retain) NSDictionary * userInfo; 
-(void)previous;
-(void)addEventListener:(id)arg1 :(id)arg2 :(id)arg3 ;
-(BOOL)muted;
-(id)initWithAppContext:(id)arg1 bridge:(id)arg2 ;
-(BOOL)dispatchEvent:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)_timedMetadataDidChangeWithExtraInfo:(id)arg1 ;
-(void)_removeManagedReference;
-(void)_addManagedReference;
-(void)removeEventListener:(id)arg1 :(id)arg2 ;
-(IKJSPlaylist *)playlist;
-(void)setPlaylist:(IKJSPlaylist *)arg1 ;
-(void)play;
-(void)setPlaybackRate:(double)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(IKJSMediaItem *)currentMediaItem;
-(double)playbackRate;
-(void)setMuted:(BOOL)arg1 ;
-(void)next;
-(IKAppPlayerBridge *)bridge;
-(NSString *)playbackState;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1 ;
-(NSDictionary *)contextMenuData;
-(void)setContextMenuData:(NSDictionary *)arg1 ;
-(IKJSMediaItem *)nextMediaItem;
-(IKJSMediaItem *)previousMediaItem;
-(BOOL)showsResumeMenu;
-(void)setShowsResumeMenu:(BOOL)arg1 ;
-(void)changeToMediaAtIndex:(unsigned long long)arg1 ;
-(NSNumber *)currentMediaItemDuration;
-(NSDate *)currentMediaItemDate;
-(IKDOMDocument *)overlayDocument;
-(void)setOverlayDocument:(IKDOMDocument *)arg1 ;
-(IKDOMDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(IKDOMDocument *)arg1 ;
-(BOOL)interactiveOverlayDismissable;
-(NSArray *)currentMediaItemAccessLogs;
-(NSArray *)currentMediaItemErrorLogs;
-(id)init;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(long long)state;
-(void)stop;
-(void)present;
-(void)pause;
@end
