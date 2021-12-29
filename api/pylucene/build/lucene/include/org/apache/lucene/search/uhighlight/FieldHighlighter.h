#ifndef org_apache_lucene_search_uhighlight_FieldHighlighter_H
#define org_apache_lucene_search_uhighlight_FieldHighlighter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class UnifiedHighlighter$OffsetSource;
          class FieldOffsetStrategy;
          class PassageFormatter;
          class PassageScorer;
        }
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace text {
    class BreakIterator;
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
        namespace uhighlight {

          class FieldHighlighter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8bc2f2e0d0e31571,
              mid_getField_db9b55ba01e03e4b,
              mid_getOffsetSource_d592a7a3fc9567b1,
              mid_highlightFieldForDoc_b6c1aec9d04a72c9,
              mid_getSummaryPassagesNoHighlight_783961f79914f7c3,
              mid_highlightOffsetsEnums_820f63260317c545,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldHighlighter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldHighlighter(const FieldHighlighter& obj) : ::java::lang::Object(obj) {}

            FieldHighlighter(const ::java::lang::String &, const ::org::apache::lucene::search::uhighlight::FieldOffsetStrategy &, const ::java::text::BreakIterator &, const ::org::apache::lucene::search::uhighlight::PassageScorer &, jint, jint, const ::org::apache::lucene::search::uhighlight::PassageFormatter &);

            ::java::lang::String getField() const;
            ::org::apache::lucene::search::uhighlight::UnifiedHighlighter$OffsetSource getOffsetSource() const;
            ::java::lang::Object highlightFieldForDoc(const ::org::apache::lucene::index::LeafReader &, jint, const ::java::lang::String &) const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(FieldHighlighter);
          extern PyTypeObject *PY_TYPE(FieldHighlighter);

          class t_FieldHighlighter {
          public:
            PyObject_HEAD
            FieldHighlighter object;
            static PyObject *wrap_Object(const FieldHighlighter&);
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
