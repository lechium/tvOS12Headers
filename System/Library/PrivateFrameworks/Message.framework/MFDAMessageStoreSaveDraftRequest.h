/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DADraftMessageRequest.h>
#import <libobjc.A.dylib/MFDAMailAccountRequest.h>

@class NSString;

@interface MFDAMessageStoreSaveDraftRequest : DADraftMessageRequest <MFDAMailAccountRequest> {

	NSString* _messageIDHeader;
	NSString* _folderID;

}

@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
-(BOOL)isUserRequested;
-(id)initWithMessage:(id)arg1 mailbox:(id)arg2 ;
-(unsigned long long)generationNumber;
-(id)deferredOperation;
-(BOOL)shouldSend;
-(void)dealloc;
@end

