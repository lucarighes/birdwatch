#ifndef org_apache_lucene_analysis_compound_HyphenationCompoundWordTokenFilter_H
#define org_apache_lucene_analysis_compound_HyphenationCompoundWordTokenFilter_H

#include "org/apache/lucene/analysis/compound/CompoundWordTokenFilterBase.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class CharArraySet;
        namespace compound {
          namespace hyphenation {
            class HyphenationTree;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace compound {

          class HyphenationCompoundWordTokenFilter : public ::org::apache::lucene::analysis::compound::CompoundWordTokenFilterBase {
           public:
            enum {
              mid_init$_109a56dc2ba6eaa7,
              mid_init$_356a83c2ce3d6727,
              mid_init$_1989952f76b81ed8,
              mid_init$_1009895ba68886bb,
              mid_getHyphenationTree_8d935e5a5a067e76,
              mid_decompose_f2cc1bce94666404,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HyphenationCompoundWordTokenFilter(jobject obj) : ::org::apache::lucene::analysis::compound::CompoundWordTokenFilterBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HyphenationCompoundWordTokenFilter(const HyphenationCompoundWordTokenFilter& obj) : ::org::apache::lucene::analysis::compound::CompoundWordTokenFilterBase(obj) {}

            HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &);
            HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &, const ::org::apache::lucene::analysis::CharArraySet &);
            HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &, jint, jint, jint);
            HyphenationCompoundWordTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree &, const ::org::apache::lucene::analysis::CharArraySet &, jint, jint, jint, jboolean);

            static ::org::apache::lucene::analysis::compound::hyphenation::HyphenationTree getHyphenationTree(const ::java::lang::String &);
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
      namespace analysis {
        namespace compound {
          extern PyType_Def PY_TYPE_DEF(HyphenationCompoundWordTokenFilter);
          extern PyTypeObject *PY_TYPE(HyphenationCompoundWordTokenFilter);

          class t_HyphenationCompoundWordTokenFilter {
          public:
            PyObject_HEAD
            HyphenationCompoundWordTokenFilter object;
            static PyObject *wrap_Object(const HyphenationCompoundWordTokenFilter&);
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
