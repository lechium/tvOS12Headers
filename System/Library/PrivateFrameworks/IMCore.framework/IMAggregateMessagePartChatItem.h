/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTextMessagePartChatItem.h>

@class NSArray;

@interface IMAggregateMessagePartChatItem : IMTextMessagePartChatItem {

	NSArray* _subparts;

}

@property (nonatomic,copy,readonly) NSArray * subparts;              //@synthesize subparts=_subparts - In the implementation block
-(NSArray *)subparts;
-(id)_initWithItem:(id)arg1 messagePartRange:(NSRange)arg2 subparts:(id)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

