/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMTypingChatItem.h>
#import <IMCore/IMPluginChatItemProtocol.h>

@class NSData, IMBalloonPluginDataSource, NSString;

@interface IMTypingPluginChatItem : IMTypingChatItem <IMPluginChatItemProtocol> {

	NSData* _typingIndicatorIcon;
	IMBalloonPluginDataSource* _dataSource;

}

@property (nonatomic,retain) IMBalloonPluginDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSData * typingIndicatorIcon;                      //@synthesize typingIndicatorIcon=_typingIndicatorIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isFromMe; 
-(NSData *)typingIndicatorIcon;
-(id)_initWithItem:(id)arg1 dataSource:(id)arg2 ;
-(NSString *)type;
-(IMBalloonPluginDataSource *)dataSource;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
@end

