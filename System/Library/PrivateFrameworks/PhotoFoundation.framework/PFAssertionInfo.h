/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:26 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PFAssertionInfo : NSObject {

	BOOL _isClassMethod;
	BOOL _isFatal;
	SEL _selector;
	Class _objectClass;
	NSString* _functionName;
	NSString* _fileName;
	unsigned long long _lineNumber;
	NSString* _message;
	NSArray* _backtrace;

}

@property (assign) SEL selector;                               //@synthesize selector=_selector - In the implementation block
@property (retain) Class objectClass;                          //@synthesize objectClass=_objectClass - In the implementation block
@property (assign) BOOL isClassMethod;                         //@synthesize isClassMethod=_isClassMethod - In the implementation block
@property (retain) NSString * functionName;                    //@synthesize functionName=_functionName - In the implementation block
@property (retain) NSString * fileName;                        //@synthesize fileName=_fileName - In the implementation block
@property (assign) unsigned long long lineNumber;              //@synthesize lineNumber=_lineNumber - In the implementation block
@property (retain) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (retain) NSArray * backtrace;                        //@synthesize backtrace=_backtrace - In the implementation block
@property (assign) BOOL isFatal;                               //@synthesize isFatal=_isFatal - In the implementation block
-(void)setObjectClass:(Class)arg1 ;
-(void)setLineNumber:(unsigned long long)arg1 ;
-(NSString *)fileName;
-(unsigned long long)lineNumber;
-(Class)objectClass;
-(void)setFileName:(NSString *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)functionName;
-(void)setIsClassMethod:(BOOL)arg1 ;
-(void)setBacktrace:(NSArray *)arg1 ;
-(void)setIsFatal:(BOOL)arg1 ;
-(BOOL)isClassMethod;
-(id)prettyMethodName;
-(BOOL)isFatal;
-(BOOL)isWarning;
-(NSArray *)backtrace;
-(id)description;
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
@end

