/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLCollection, NSString;

@interface DOMHTMLFormElement : DOMHTMLElement  {
}

@property(retain,readonly) DOMHTMLCollection * elements;
@property(readonly) int length;
@property(copy) NSString * name;
@property(copy) NSString * acceptCharset;
@property(copy) NSString * action;
@property(copy) NSString * encoding;
@property(copy) NSString * enctype;
@property(copy) NSString * method;
@property(copy) NSString * target;


- (BOOL)noValidate;
- (void)setNoValidate:(BOOL)arg1;
- (id)acceptCharset;
- (void)setAcceptCharset:(id)arg1;
- (void)setEncoding:(id)arg1;
- (id)enctype;
- (void)setEnctype:(id)arg1;
- (void)setMethod:(id)arg1;
- (void)setAutocorrect:(BOOL)arg1;
- (id)autocapitalize;
- (void)setAutocapitalize:(id)arg1;
- (void)submit;
- (BOOL)checkValidity;
- (id)encoding;
- (int)structuralComplexityContribution;
- (void)reset;
- (id)method;
- (BOOL)autocorrect;
- (id)elements;
- (void)setAction:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)action;
- (id)target;
- (int)length;

@end
