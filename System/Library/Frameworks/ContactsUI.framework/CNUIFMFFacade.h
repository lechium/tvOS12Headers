/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FMFSession;

@interface CNUIFMFFacade : NSObject {

	FMFSession* _fmfSession;

}

@property (nonatomic,readonly) FMFSession * fmfSession;              //@synthesize fmfSession=_fmfSession - In the implementation block
-(id)initWithFMFSession:(id)arg1 ;
-(FMFSession *)fmfSession;
-(void)fetchFriendHandlesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
@end
