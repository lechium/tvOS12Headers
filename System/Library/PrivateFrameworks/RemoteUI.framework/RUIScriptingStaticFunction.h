/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RUIScriptingStaticFunction : NSObject {

	int _JSPropertyAttributes;
	const char* _identifier;
	/*function pointer*/void* _function;

}

@property (assign,nonatomic) const char* identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* function;              //@synthesize function=_function - In the implementation block
@property (assign,nonatomic) int JSPropertyAttributes;                        //@synthesize JSPropertyAttributes=_JSPropertyAttributes - In the implementation block
-(void)setFunction:(/*function pointer*/void*)arg1 ;
-(int)JSPropertyAttributes;
-(void)setJSPropertyAttributes:(int)arg1 ;
-(/*function pointer*/void*)function;
-(const char*)identifier;
-(id)description;
-(void)setIdentifier:(const char*)arg1 ;
@end
