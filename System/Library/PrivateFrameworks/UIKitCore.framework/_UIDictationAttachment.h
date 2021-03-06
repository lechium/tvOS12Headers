/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class NSDictionary;

@interface _UIDictationAttachment : NSTextAttachment {

	NSDictionary* _typingAttributesBeforeInsertion;
	NSRange _attachmentRange;

}

@property (assign,nonatomic) NSRange attachmentRange;                                   //@synthesize attachmentRange=_attachmentRange - In the implementation block
@property (nonatomic,copy) NSDictionary * typingAttributesBeforeInsertion;              //@synthesize typingAttributesBeforeInsertion=_typingAttributesBeforeInsertion - In the implementation block
-(void)setAttachmentRange:(NSRange)arg1 ;
-(NSRange)attachmentRange;
-(NSDictionary *)typingAttributesBeforeInsertion;
-(void)setTypingAttributesBeforeInsertion:(NSDictionary *)arg1 ;
@end

