/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACFHTTPMethodInvocationDelegate.h>

@class NSError, NSData, NSString;

@interface ACFHTTPMethodSynchronousInvocationHelper : NSObject <ACFHTTPMethodInvocationDelegate> {

	NSError* _error;
	NSData* _result;

}

@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (retain) NSData * result;                                 //@synthesize result=_result - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResult:(NSData *)arg1 ;
-(void)httpMethodInvocation:(id)arg1 didFinishWithResult:(id)arg2 ;
-(void)httpMethodInvocation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(NSData *)result;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

