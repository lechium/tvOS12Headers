/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMTranscriptChatItem.h>

@interface IMReportSpamChatItem : IMTranscriptChatItem {

	BOOL _wasReportedAsSpam;
	BOOL _isGroupMessage;
	BOOL _hasMultipleMessages;
	BOOL _showReportSMSSpam;

}

@property (nonatomic,readonly) BOOL wasReportedAsSpam;                //@synthesize wasReportedAsSpam=_wasReportedAsSpam - In the implementation block
@property (nonatomic,readonly) BOOL isGroupMessage;                   //@synthesize isGroupMessage=_isGroupMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasMultipleMessages;              //@synthesize hasMultipleMessages=_hasMultipleMessages - In the implementation block
@property (nonatomic,readonly) BOOL showReportSMSSpam;                //@synthesize showReportSMSSpam=_showReportSMSSpam - In the implementation block
-(BOOL)isGroupMessage;
-(id)_initWithItem:(id)arg1 wasReportedAsSpam:(BOOL)arg2 isGroup:(BOOL)arg3 hasMultipleMessages:(BOOL)arg4 showReportSMSSpam:(BOOL)arg5 ;
-(BOOL)wasReportedAsSpam;
-(BOOL)hasMultipleMessages;
-(BOOL)showReportSMSSpam;
@end

