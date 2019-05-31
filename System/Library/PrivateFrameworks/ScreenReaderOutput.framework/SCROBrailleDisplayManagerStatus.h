/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SCROBrailleDisplayManagerStatus : NSObject {

	BOOL _currentAnnouncementUnread;
	BOOL _anyUnreadAnnouncements;
	int _virtualAlignment;
	NSData* _aggregatedData;
	long long _masterStatusCellIndex;

}

@property (nonatomic,retain) NSData * aggregatedData;                      //@synthesize aggregatedData=_aggregatedData - In the implementation block
@property (assign,nonatomic) int virtualAlignment;                         //@synthesize virtualAlignment=_virtualAlignment - In the implementation block
@property (assign,nonatomic) long long masterStatusCellIndex;              //@synthesize masterStatusCellIndex=_masterStatusCellIndex - In the implementation block
@property (assign,nonatomic) BOOL currentAnnouncementUnread;               //@synthesize currentAnnouncementUnread=_currentAnnouncementUnread - In the implementation block
@property (assign,nonatomic) BOOL anyUnreadAnnouncements;                  //@synthesize anyUnreadAnnouncements=_anyUnreadAnnouncements - In the implementation block
-(void)setMasterStatusCellIndex:(long long)arg1 ;
-(long long)masterStatusCellIndex;
-(NSData *)aggregatedData;
-(void)setAggregatedData:(NSData *)arg1 ;
-(int)virtualAlignment;
-(void)setVirtualAlignment:(int)arg1 ;
-(BOOL)currentAnnouncementUnread;
-(void)setCurrentAnnouncementUnread:(BOOL)arg1 ;
-(BOOL)anyUnreadAnnouncements;
-(void)setAnyUnreadAnnouncements:(BOOL)arg1 ;
@end

