/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMutableMessageHeaders, NSArray, MFOutgoingLibraryMessageContent, MFOutgoingRichtextMessageContent, MFOutgoingMultipartRelatedContent;

@interface MFOutgoingMessageContent : NSObject {

	MFMutableMessageHeaders* _headers;
	NSArray* _placeholders;

}

@property (nonatomic,retain) MFMutableMessageHeaders * headers;                                   //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSArray * placeholders;                                              //@synthesize placeholders=_placeholders - In the implementation block
@property (nonatomic,readonly) MFOutgoingLibraryMessageContent * libraryContent; 
@property (nonatomic,readonly) MFOutgoingRichtextMessageContent * richtextContent; 
@property (nonatomic,readonly) MFOutgoingMultipartRelatedContent * multipartContent; 
-(void)setPlaceholders:(NSArray *)arg1 ;
-(MFOutgoingLibraryMessageContent *)libraryContent;
-(MFOutgoingRichtextMessageContent *)richtextContent;
-(MFOutgoingMultipartRelatedContent *)multipartContent;
-(NSArray *)placeholders;
-(void)setHeaders:(MFMutableMessageHeaders *)arg1 ;
-(MFMutableMessageHeaders *)headers;
-(void)dealloc;
-(id)copy;
@end
