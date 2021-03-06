/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class HighlightLayer, WebNodeHighlightView, WAKView;

@interface WebNodeHighlight : NSObject  {
    WAKView *_targetView;
    HighlightLayer *_highlightLayer;
    WebNodeHighlightView *_highlightView;
    struct InspectorController { struct OwnPtr<WebCore::InstrumentingAgents> { 
            struct InstrumentingAgents {} *m_ptr; 
        } x1; struct OwnPtr<WebCore::InjectedScriptManager> { 
            struct InjectedScriptManager {} *m_ptr; 
        } x2; struct OwnPtr<WebCore::InspectorState> { 
            struct InspectorState {} *m_ptr; 
        } x3; struct OwnPtr<WebCore::InspectorAgent> { 
            struct InspectorAgent {} *m_ptr; 
        } x4; struct OwnPtr<WebCore::InspectorPageAgent> { 
            struct InspectorPageAgent {} *m_ptr; 
        } x5; struct OwnPtr<WebCore::InspectorDOMAgent> { 
            struct InspectorDOMAgent {} *m_ptr; 
        } x6; struct OwnPtr<WebCore::InspectorCSSAgent> { 
            struct InspectorCSSAgent {} *m_ptr; 
        } x7; struct OwnPtr<WebCore::InspectorDatabaseAgent> { 
            struct InspectorDatabaseAgent {} *m_ptr; 
        } x8; struct OwnPtr<WebCore::InspectorDOMStorageAgent> { 
            struct InspectorDOMStorageAgent {} *m_ptr; 
        } x9; struct OwnPtr<WebCore::InspectorTimelineAgent> { 
            struct InspectorTimelineAgent {} *m_ptr; 
        } x10; struct OwnPtr<WebCore::InspectorApplicationCacheAgent> { 
            struct InspectorApplicationCacheAgent {} *m_ptr; 
        } x11; struct RefPtr<WebCore::InspectorResourceAgent> { 
            struct InspectorResourceAgent {} *m_ptr; 
        } x12; struct OwnPtr<WebCore::InspectorRuntimeAgent> { 
            struct InspectorRuntimeAgent {} *m_ptr; 
        } x13; struct OwnPtr<WebCore::InspectorConsoleAgent> { 
            struct InspectorConsoleAgent {} *m_ptr; 
        } x14; struct OwnPtr<WebCore::InspectorDebuggerAgent> { 
            struct InspectorDebuggerAgent {} *m_ptr; 
        } x15; struct OwnPtr<WebCore::InspectorDOMDebuggerAgent> { 
            struct InspectorDOMDebuggerAgent {} *m_ptr; 
        } x16; struct OwnPtr<WebCore::InspectorProfilerAgent> { 
            struct InspectorProfilerAgent {} *m_ptr; 
        } x17; struct OwnPtr<WebCore::InspectorWorkerAgent> { 
            struct InspectorWorkerAgent {} *m_ptr; 
        } x18; struct RefPtr<WebCore::InspectorBackendDispatcher> { 
            struct InspectorBackendDispatcher {} *m_ptr; 
        } x19; struct OwnPtr<WebCore::InspectorFrontendClient> { 
            struct InspectorFrontendClient {} *m_ptr; 
        } x20; struct OwnPtr<WebCore::InspectorFrontend> { 
            struct InspectorFrontend {} *m_ptr; 
        } x21; struct Page {} *x22; struct InspectorClient {} *x23; boolx24; boolx25; } *_inspectorController;
    id _delegate;
}


- (void)setDelegate:(id)arg1;
- (void)setNeedsDisplay;
- (void)attach;
- (void)detach;
- (id)delegate;
- (id)initWithTargetView:(id)arg1 inspectorController:(struct InspectorController { struct OwnPtr<WebCore::InstrumentingAgents> { struct InstrumentingAgents {} *x_1_1_1; } x1; struct OwnPtr<WebCore::InjectedScriptManager> { struct InjectedScriptManager {} *x_2_1_1; } x2; struct OwnPtr<WebCore::InspectorState> { struct InspectorState {} *x_3_1_1; } x3; struct OwnPtr<WebCore::InspectorAgent> { struct InspectorAgent {} *x_4_1_1; } x4; struct OwnPtr<WebCore::InspectorPageAgent> { struct InspectorPageAgent {} *x_5_1_1; } x5; struct OwnPtr<WebCore::InspectorDOMAgent> { struct InspectorDOMAgent {} *x_6_1_1; } x6; struct OwnPtr<WebCore::InspectorCSSAgent> { struct InspectorCSSAgent {} *x_7_1_1; } x7; struct OwnPtr<WebCore::InspectorDatabaseAgent> { struct InspectorDatabaseAgent {} *x_8_1_1; } x8; struct OwnPtr<WebCore::InspectorDOMStorageAgent> { struct InspectorDOMStorageAgent {} *x_9_1_1; } x9; struct OwnPtr<WebCore::InspectorTimelineAgent> { struct InspectorTimelineAgent {} *x_10_1_1; } x10; struct OwnPtr<WebCore::InspectorApplicationCacheAgent> { struct InspectorApplicationCacheAgent {} *x_11_1_1; } x11; struct RefPtr<WebCore::InspectorResourceAgent> { struct InspectorResourceAgent {} *x_12_1_1; } x12; struct OwnPtr<WebCore::InspectorRuntimeAgent> { struct InspectorRuntimeAgent {} *x_13_1_1; } x13; struct OwnPtr<WebCore::InspectorConsoleAgent> { struct InspectorConsoleAgent {} *x_14_1_1; } x14; struct OwnPtr<WebCore::InspectorDebuggerAgent> { struct InspectorDebuggerAgent {} *x_15_1_1; } x15; struct OwnPtr<WebCore::InspectorDOMDebuggerAgent> { struct InspectorDOMDebuggerAgent {} *x_16_1_1; } x16; struct OwnPtr<WebCore::InspectorProfilerAgent> { struct InspectorProfilerAgent {} *x_17_1_1; } x17; struct OwnPtr<WebCore::InspectorWorkerAgent> { struct InspectorWorkerAgent {} *x_18_1_1; } x18; struct RefPtr<WebCore::InspectorBackendDispatcher> { struct InspectorBackendDispatcher {} *x_19_1_1; } x19; struct OwnPtr<WebCore::InspectorFrontendClient> { struct InspectorFrontendClient {} *x_20_1_1; } x20; struct OwnPtr<WebCore::InspectorFrontend> { struct InspectorFrontend {} *x_21_1_1; } x21; struct Page {} *x22; struct InspectorClient {} *x23; boolx24; boolx25; }*)arg2;
- (id)highlightView;
- (id)targetView;
- (struct InspectorController { struct OwnPtr<WebCore::InstrumentingAgents> { struct InstrumentingAgents {} *x_1_1_1; } x1; struct OwnPtr<WebCore::InjectedScriptManager> { struct InjectedScriptManager {} *x_2_1_1; } x2; struct OwnPtr<WebCore::InspectorState> { struct InspectorState {} *x_3_1_1; } x3; struct OwnPtr<WebCore::InspectorAgent> { struct InspectorAgent {} *x_4_1_1; } x4; struct OwnPtr<WebCore::InspectorPageAgent> { struct InspectorPageAgent {} *x_5_1_1; } x5; struct OwnPtr<WebCore::InspectorDOMAgent> { struct InspectorDOMAgent {} *x_6_1_1; } x6; struct OwnPtr<WebCore::InspectorCSSAgent> { struct InspectorCSSAgent {} *x_7_1_1; } x7; struct OwnPtr<WebCore::InspectorDatabaseAgent> { struct InspectorDatabaseAgent {} *x_8_1_1; } x8; struct OwnPtr<WebCore::InspectorDOMStorageAgent> { struct InspectorDOMStorageAgent {} *x_9_1_1; } x9; struct OwnPtr<WebCore::InspectorTimelineAgent> { struct InspectorTimelineAgent {} *x_10_1_1; } x10; struct OwnPtr<WebCore::InspectorApplicationCacheAgent> { struct InspectorApplicationCacheAgent {} *x_11_1_1; } x11; struct RefPtr<WebCore::InspectorResourceAgent> { struct InspectorResourceAgent {} *x_12_1_1; } x12; struct OwnPtr<WebCore::InspectorRuntimeAgent> { struct InspectorRuntimeAgent {} *x_13_1_1; } x13; struct OwnPtr<WebCore::InspectorConsoleAgent> { struct InspectorConsoleAgent {} *x_14_1_1; } x14; struct OwnPtr<WebCore::InspectorDebuggerAgent> { struct InspectorDebuggerAgent {} *x_15_1_1; } x15; struct OwnPtr<WebCore::InspectorDOMDebuggerAgent> { struct InspectorDOMDebuggerAgent {} *x_16_1_1; } x16; struct OwnPtr<WebCore::InspectorProfilerAgent> { struct InspectorProfilerAgent {} *x_17_1_1; } x17; struct OwnPtr<WebCore::InspectorWorkerAgent> { struct InspectorWorkerAgent {} *x_18_1_1; } x18; struct RefPtr<WebCore::InspectorBackendDispatcher> { struct InspectorBackendDispatcher {} *x_19_1_1; } x19; struct OwnPtr<WebCore::InspectorFrontendClient> { struct InspectorFrontendClient {} *x_20_1_1; } x20; struct OwnPtr<WebCore::InspectorFrontend> { struct InspectorFrontend {} *x_21_1_1; } x21; struct Page {} *x22; struct InspectorClient {} *x23; boolx24; boolx25; }*)inspectorController;
- (void)dealloc;

@end
