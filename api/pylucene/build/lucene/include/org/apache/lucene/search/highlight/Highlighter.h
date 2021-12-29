#ifndef org_apache_lucene_search_highlight_Highlighter_H
#define org_apache_lucene_search_highlight_Highlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class Formatter;
          class Scorer;
          class TextFragment;
          class Encoder;
          class InvalidTokenOffsetsException;
          class Fragmenter;
        }
      }
      namespace analysis {
        class Analyzer;
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class Highlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_d66175d08cd0001f,
              mid_init$_715f9fb56796387a,
              mid_init$_888daa1f8d88ebe9,
              mid_getBestFragment_c0bd80aac67dd7ce,
              mid_getBestFragment_c4ce23f2101db7fc,
              mid_getBestFragments_2c596049afc6696a,
              mid_getBestFragments_eb9171e7ca065395,
              mid_getBestFragments_a77855b70a411c39,
              mid_getBestTextFragments_8449e7d5b1418b9e,
              mid_getEncoder_a25b71e51060f28f,
              mid_getFragmentScorer_c106b49ad9138f56,
              mid_getMaxDocCharsToAnalyze_9972fcc56b44e79d,
              mid_getTextFragmenter_39f7ae30763bf762,
              mid_setEncoder_dcf269af48498608,
              mid_setFragmentScorer_d66175d08cd0001f,
              mid_setMaxDocCharsToAnalyze_040c4cd0390c5aff,
              mid_setTextFragmenter_d5d8ba1a2977b19f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Highlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Highlighter(const Highlighter& obj) : ::java::lang::Object(obj) {}

            static jint DEFAULT_MAX_CHARS_TO_ANALYZE;

            Highlighter(const ::org::apache::lucene::search::highlight::Scorer &);
            Highlighter(const ::org::apache::lucene::search::highlight::Formatter &, const ::org::apache::lucene::search::highlight::Scorer &);
            Highlighter(const ::org::apache::lucene::search::highlight::Formatter &, const ::org::apache::lucene::search::highlight::Encoder &, const ::org::apache::lucene::search::highlight::Scorer &);

            ::java::lang::String getBestFragment(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &) const;
            ::java::lang::String getBestFragment(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &, const ::java::lang::String &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, jint) const;
            ::java::lang::String getBestFragments(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, jint, const ::java::lang::String &) const;
            JArray< ::java::lang::String > getBestFragments(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &, const ::java::lang::String &, jint) const;
            JArray< ::org::apache::lucene::search::highlight::TextFragment > getBestTextFragments(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &, jboolean, jint) const;
            ::org::apache::lucene::search::highlight::Encoder getEncoder() const;
            ::org::apache::lucene::search::highlight::Scorer getFragmentScorer() const;
            jint getMaxDocCharsToAnalyze() const;
            ::org::apache::lucene::search::highlight::Fragmenter getTextFragmenter() const;
            void setEncoder(const ::org::apache::lucene::search::highlight::Encoder &) const;
            void setFragmentScorer(const ::org::apache::lucene::search::highlight::Scorer &) const;
            void setMaxDocCharsToAnalyze(jint) const;
            void setTextFragmenter(const ::org::apache::lucene::search::highlight::Fragmenter &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(Highlighter);
          extern PyTypeObject *PY_TYPE(Highlighter);

          class t_Highlighter {
          public:
            PyObject_HEAD
            Highlighter object;
            static PyObject *wrap_Object(const Highlighter&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
