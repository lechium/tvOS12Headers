/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSBlob.h>

@protocol IKJSBlob <JSExport>
@end


@class NSData;

@interface IKJSBlob : IKJSObject <IKJSBlob> {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data; 
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
@end
