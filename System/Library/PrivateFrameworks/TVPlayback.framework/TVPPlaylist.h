/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPMediaItem;
@class NSMutableArray, NSArray, NSObject, NSString, NSDictionary;

@interface TVPPlaylist : NSObject {

	NSMutableArray* _trackList;
	NSMutableArray* _shuffledItems;
	unsigned long long _activeListIndex;
	NSArray* _activeList;
	NSArray* _upcomingItems;
	BOOL _windowed;
	BOOL _shuffleEnabled;
	BOOL _skipExplicit;
	NSObject*<TVPMediaItem> _currentMediaItem;
	NSObject*<TVPMediaItem> _nextMediaItem;
	NSObject*<TVPMediaItem> _previousMediaItem;
	long long _endAction;
	unsigned long long _currentIndex;
	unsigned long long _count;
	unsigned long long _numConsecutivePlaybackFailures;
	NSString* _name;
	long long _repeatMode;
	NSDictionary* _changeContext;
	unsigned long long _upcomingItemsLimit;
	unsigned long long _upNextIndex;

}

@property (nonatomic,retain) NSObject*<TVPMediaItem> currentMediaItem;                       //@synthesize currentMediaItem=_currentMediaItem - In the implementation block
@property (nonatomic,retain) NSObject*<TVPMediaItem> nextMediaItem;                          //@synthesize nextMediaItem=_nextMediaItem - In the implementation block
@property (nonatomic,retain) NSObject*<TVPMediaItem> previousMediaItem;                      //@synthesize previousMediaItem=_previousMediaItem - In the implementation block
@property (nonatomic,retain) NSDictionary * changeContext;                                   //@synthesize changeContext=_changeContext - In the implementation block
@property (assign,nonatomic) unsigned long long currentIndex;                                //@synthesize currentIndex=_currentIndex - In the implementation block
@property (assign,nonatomic) unsigned long long count;                                       //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) unsigned long long upNextIndex;                               //@synthesize upNextIndex=_upNextIndex - In the implementation block
@property (nonatomic,readonly) NSArray * trackList;                                          //@synthesize trackList=_trackList - In the implementation block
@property (nonatomic,readonly) NSArray * activeList;                                         //@synthesize activeList=_activeList - In the implementation block
@property (nonatomic,readonly) unsigned long long activeListIndex;                           //@synthesize activeListIndex=_activeListIndex - In the implementation block
@property (assign,nonatomic) long long endAction;                                            //@synthesize endAction=_endAction - In the implementation block
@property (assign,nonatomic) BOOL windowed;                                                  //@synthesize windowed=_windowed - In the implementation block
@property (assign,nonatomic) unsigned long long numConsecutivePlaybackFailures;              //@synthesize numConsecutivePlaybackFailures=_numConsecutivePlaybackFailures - In the implementation block
@property (nonatomic,retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL shuffleEnabled;                                          //@synthesize shuffleEnabled=_shuffleEnabled - In the implementation block
@property (nonatomic,readonly) BOOL supportsShuffle; 
@property (assign,nonatomic) long long repeatMode;                                           //@synthesize repeatMode=_repeatMode - In the implementation block
@property (nonatomic,readonly) BOOL supportsRepeat; 
@property (assign,nonatomic) BOOL skipExplicit;                                              //@synthesize skipExplicit=_skipExplicit - In the implementation block
@property (nonatomic,readonly) NSArray * upcomingItems; 
@property (assign,nonatomic) unsigned long long upcomingItemsLimit;                          //@synthesize upcomingItemsLimit=_upcomingItemsLimit - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)shuffleEnabled;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(NSObject*<TVPMediaItem>)currentMediaItem;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(id)initWithMediaItems:(id)arg1 index:(long long)arg2 isCollection:(BOOL)arg3 ;
-(NSObject*<TVPMediaItem>)nextMediaItem;
-(NSObject*<TVPMediaItem>)previousMediaItem;
-(BOOL)changeToActiveListIndex:(unsigned long long)arg1 withContext:(id)arg2 ;
-(long long)endAction;
-(void)setEndAction:(long long)arg1 ;
-(void)setCurrentMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(void)removeItemsAtIndexes:(id)arg1 ;
-(void)insertItems:(id)arg1 atIndexes:(id)arg2 ;
-(unsigned long long)activeListIndex;
-(NSArray *)activeList;
-(BOOL)canMoveItemAtIndexToPlayNext:(long long)arg1 ;
-(void)purgeHistory;
-(void)moveItemAtIndexToPlayNext:(long long)arg1 ;
-(void)playItemsNext:(id)arg1 ;
-(void)setMediaAsCurrentlyPlayingAppendTracklist:(id)arg1 ;
-(void)insertAfterCurrentPlayingItem:(id)arg1 ;
-(BOOL)supportsRepeat;
-(BOOL)supportsShuffle;
-(void)setShuffleEnabled:(BOOL)arg1 preserveCurrentItem:(BOOL)arg2 ;
-(BOOL)_isMediaItemExplicit:(id)arg1 ;
-(void)setSkipExplicit:(BOOL)arg1 ;
-(NSArray *)trackList;
-(NSDictionary *)changeContext;
-(BOOL)moreItemsAvailable:(long long)arg1 ;
-(void)changeMedia:(long long)arg1 withContext:(id)arg2 ;
-(void)setNumConsecutivePlaybackFailures:(unsigned long long)arg1 ;
-(unsigned long long)numConsecutivePlaybackFailures;
-(void)_updateCurrent:(BOOL)arg1 andNextItems:(BOOL)arg2 withContext:(id)arg3 ;
-(unsigned long long)_nextActiveListIndex;
-(unsigned long long)_previousActiveListIndex;
-(BOOL)skipExplicit;
-(NSArray *)upcomingItems;
-(void)setChangeContext:(NSDictionary *)arg1 ;
-(BOOL)windowed;
-(void)_shuffle:(BOOL)arg1 ;
-(unsigned long long)upNextIndex;
-(void)changeMedia:(long long)arg1 ;
-(void)setWindowed:(BOOL)arg1 ;
-(void)setUpcomingItemsLimit:(unsigned long long)arg1 ;
-(void)addItemsToUpNext:(id)arg1 ;
-(void)setNextMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(void)setPreviousMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(unsigned long long)upcomingItemsLimit;
-(id)init;
-(unsigned long long)count;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeItemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentIndex;
-(void)addItems:(id)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
@end

