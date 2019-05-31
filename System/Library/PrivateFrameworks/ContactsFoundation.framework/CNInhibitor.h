/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNInhibitor.h>

@protocol CNInhibitor <NSObject>
@required
-(void)stop;
-(void)start;

@end


@class NSString;

@interface CNInhibitor : NSObject <CNInhibitor> {

	BOOL _debugIsInhibiting;

}

@property (assign,nonatomic) BOOL debugIsInhibiting;                //@synthesize debugIsInhibiting=_debugIsInhibiting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suddenTerminationInhibitor;
+(id)suddenTerminationInhibitorWithProcessInfo:(id)arg1 ;
+(id)os_transactionInhibitorWithLabel:(id)arg1 ;
-(void)setDebugIsInhibiting:(BOOL)arg1 ;
-(BOOL)debugIsInhibiting;
-(void)dealloc;
-(void)stop;
-(void)start;
@end

