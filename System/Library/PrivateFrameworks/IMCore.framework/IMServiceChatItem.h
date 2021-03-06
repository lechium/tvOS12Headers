/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, IMServiceImpl;

@interface IMServiceChatItem : IMTranscriptChatItem {

	IMHandle* _handle;
	IMServiceImpl* _service;

}

@property (nonatomic,readonly) IMServiceImpl * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) IMHandle * handle;                    //@synthesize handle=_handle - In the implementation block
-(IMServiceImpl *)service;
-(IMHandle *)handle;
-(id)_initWithItem:(id)arg1 service:(id)arg2 handle:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

